/* Write your PL/SQL query statement below */
with cte as(
select person_name,weight,turn,
sum(weight) over(order by turn) as running_weight
 from queue)
 select person_name from cte 
 where running_weight <=1000 and
 turn =(select max(turn) from cte where running_weight<=1000);