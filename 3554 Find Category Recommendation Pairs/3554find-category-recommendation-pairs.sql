# Write your MySQL query statement bel
with total as
(
    select user_id , category from
    ProductPurchases p join productinfo q on p.product_id = q.product_id
)
select a.category as category1 , b.category as category2 ,count(distinct a.user_id) as customer_count from 
total a join total b on a.user_id = b.user_id
and a.category < b.category
group by a.category , b.category
having count(distinct a.user_id)>=3
order by count(distinct a.user_id) desc , a.category asc , b.category asc;
