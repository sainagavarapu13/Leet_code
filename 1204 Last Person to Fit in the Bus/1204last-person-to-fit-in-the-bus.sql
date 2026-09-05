# Write your MySQL query statement below
with cte as(
    select person_name, sum(weight) over (order by turn) as s from queue
)
select person_name from
cte
where s <=1000
    order by s desc
limit 1;