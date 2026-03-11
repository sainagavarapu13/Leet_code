# Write your MySQL query statement below
select round( count(*)*100/(select count(distinct customer_id  ) from delivery ),2)  as immediate_percentage  from delivery d
where order_date =customer_pref_delivery_date and
order_date  = 
(
    select min(order_date ) from delivery 
    where customer_id = d.customer_id 
)