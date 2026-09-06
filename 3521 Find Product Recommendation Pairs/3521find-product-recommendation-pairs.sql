# Write your MySQL query statement below
with tot as
(
    select user_id , p.product_id , category 
    from ProductPurchases  p join productinfo q on p.product_id = q.product_id
)

select 
    a.product_id as product1_id , b.product_id as product2_id , a.category as 
    product1_category , b.category as product2_category, 
    count(distinct a.user_id) as customer_count
from 
    tot a join tot b
    on a.user_id = b.user_id
    and a.product_id < b.product_id
group by 
    a.product_id , b.product_id
having
    count(distinct a.user_id)>=3
order by
    customer_count desc,
    product1_id asc,
    product2_id asc;

