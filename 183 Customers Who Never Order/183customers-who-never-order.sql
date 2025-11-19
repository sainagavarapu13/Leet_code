/* Write your PL/SQL query statement below */
select name as Customers from customers
where id Not IN(
    select customerId from Orders
    );