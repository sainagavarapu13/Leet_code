/* Write your PL/SQL query statement below */
select Name as Customers  from
 Customers left join Orders 
on Customers.id=Orders.customerId
where Orders.ID is NULL ;