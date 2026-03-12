# Write your MySQL query statement below
select m.query_name , round(avg(m.rating/m.position ),2) as quality ,
round((
   ( select count(*) from queries q where rating < 3 and q.query_name =m.query_name  ) *100)
    /(select count(*) from queries q where q.query_name  = m.query_name ),2) as poor_query_percentage 
from queries m
group by query_name 