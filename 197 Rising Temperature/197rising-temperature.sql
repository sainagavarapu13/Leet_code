# Write your MySQL query statement below
with cte as(
    select * , lag(temperature) over(order by recordDate) as pret , lag(recorddate) over(order by recordDate) as pred
    from weather
)
select id from cte
where pret < temperature and datediff(pred , recorddate)=-1 ;