# Write your MySQL query statement below
select p.product_id ,ifnull(round(sum(u.units*p.price)/sum(u.units),2),0) as average_price from
prices p  left join UnitsSold  u
on p.start_date <= u.purchase_date and u.purchase_date <=p.end_date and p.product_id = u.product_id 
group by p.product_id ;