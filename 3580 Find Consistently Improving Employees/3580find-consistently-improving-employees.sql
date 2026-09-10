# Write your MySQL query statement below
with rans as(
    select * , row_number() over
                (partition by employee_id order by review_date desc) as ran
    from performance_reviews
),
top as(
   select * from rans
   where ran <=3
),
lag2 as
(
    select *, lag(rating) over (partition by employee_id order by ran desc) as pre
    from top
),
lag1 as
(
    select * from lag2
    having pre < rating
),
lag3 as
(
    select employee_id, sum(rating -pre)as improvement_score from lag1
    group by employee_id
    having count(*)=2
)

select e.employee_id, name,  improvement_score from 
employees e join lag3 l on l.employee_id=e.employee_id
order by improvement_score desc , name ;
