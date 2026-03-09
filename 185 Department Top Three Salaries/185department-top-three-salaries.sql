# Write your MySQL query statement below
select   Department,
         Employee,
        Salary from
(select   d.name AS Department,
        e.name AS Employee,
        e.salary AS Salary,
Dense_rank() over(partition by d.name order by salary desc ) as ranking
from Employee e join Department d
on e.departmentId = d.id
)g
where ranking <=3;
