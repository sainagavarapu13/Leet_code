# Write your MySQL query statement below
with cte as (
select e.employee_id as id
from employees e left join salaries s 
on e.employee_id  = s.employee_id 
where s.salary is null 
union 
select s.employee_id as id
from employees e right join salaries s 
on e.employee_id  = s.employee_id 
where e.name is null) 
select id as employee_id  from cte 
order by id;