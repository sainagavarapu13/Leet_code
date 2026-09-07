# Write your MySQL query statement below
select s.user_id as buyer_id ,join_date , count(order_id) as orders_in_2019
from
users s  left join orders o on s.user_id = o.buyer_id and year(order_date)='2019'
group by  s.user_id,join_date;
