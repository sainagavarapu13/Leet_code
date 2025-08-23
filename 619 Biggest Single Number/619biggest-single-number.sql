/* Write your PL/SQL query statement below */
select max(num) as num from(
select  max(num)  as num from Mynumbers
group by num
having count(*)=1 
);