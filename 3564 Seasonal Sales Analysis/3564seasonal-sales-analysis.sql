# Write your MySQL query statement below
(select "Fall" as season, p.category , sum(quantity) as total_quantity 
, sum(price*quantity) as total_revenue from
sales s join products p on s.product_id = p.product_id
where month(sale_date) = 10 or
        month(sale_date) = 11 or
        month(sale_date) = 09 
group by p.category
order by total_quantity desc , total_revenue desc ,category asc
limit 1
)
union 

(select "Spring" as season, p.category , sum(quantity) as total_quantity 
, sum(price*quantity) as total_revenue from
sales s join products p on s.product_id = p.product_id
where month(sale_date) = 03 or
        month(sale_date) = 04 or
        month(sale_date) = 05 
group by p.category
order by total_quantity desc , total_revenue desc ,category asc
limit 1)
union
# Write your MySQL query statement below
(select "Summer" as season, p.category , sum(quantity) as total_quantity 
, sum(price*quantity) as total_revenue from
sales s join products p on s.product_id = p.product_id
where month(sale_date) = 06 or
        month(sale_date) = 07 or
        month(sale_date) = 08 
group by p.category
order by total_quantity desc , total_revenue desc ,category asc
limit 1)
union 
# Write your MySQL query statement below
(select "Winter" as season, p.category , sum(quantity) as total_quantity 
, sum(price*quantity) as total_revenue from
sales s join products p on s.product_id = p.product_id
where month(sale_date) = 12 or
        month(sale_date) = 01 or
        month(sale_date) = 02 
group by p.category
order by total_quantity desc , total_revenue desc ,category asc
limit 1);