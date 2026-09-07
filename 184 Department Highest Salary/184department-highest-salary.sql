# Write your MySQL query statement below

select 
    d.name as department, 
    e.name as employee,
    salary
from
    employee e join department d on e.departmentid = d.id
    where salary =(
        select max(salary) from employee m
        where m.departmentid = e.departmentid
    )
