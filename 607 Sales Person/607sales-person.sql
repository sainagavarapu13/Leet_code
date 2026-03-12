# Write your MySQL query statement below
select name 
from SalesPerson 
where name not in 
(
    select  s.name
from SalesPerson s join Orders o
on s.sales_id = o.sales_id 
join Company c
on c.com_id = o.com_id
where c.name ='RED'
)


