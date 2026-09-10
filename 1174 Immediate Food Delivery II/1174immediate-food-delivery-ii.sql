# Write your MySQL query statement below
with cte as
(
    select *, row_number() over ( partition by customer_id order by order_date) as  ran from
    delivery
),
act as(
    select * , count( 
            case when order_date = customer_pref_delivery_date then 1
            end
    ) as imm , count(*) as number
    from cte
    where ran =1
)
select round((imm/number)*100, 2) as immediate_percentage
from act;