# Write your MySQL query statement below
select product_id ,product_name from Product 
where product_id not in
(
    select product_id from sales 
    where   year(sale_date) != 2019
     or  month(sale_date)  not between 1 and 3

)
and product_id in
(
    select product_id from sales 
    where   year(sale_date) = 2019
     and  month(sale_date)   between 1 and 3
)