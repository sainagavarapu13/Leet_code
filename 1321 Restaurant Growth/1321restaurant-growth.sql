# Write your MySQL query statement below
with cte as(
    select 
        visited_on , sum(amount) as amount,
        sum(sum(amount)) over (order by visited_on) as tot,
        rank() over( order by visited_on) as ran
        from customer 
        group by visited_on
)

select
      visited_on , 
     tot-(
            case
            when c.ran >7 then (select tot from cte a where a.ran =c.ran-7 )
            else 0
            end
        ) as amount,
    round( (tot-(
            case
            when c.ran >7 then (select tot from cte a where a.ran =c.ran-7 )
            else 0
            end
        ) )/7,2) as average_amount
from 
    cte c
where ran >=7;

