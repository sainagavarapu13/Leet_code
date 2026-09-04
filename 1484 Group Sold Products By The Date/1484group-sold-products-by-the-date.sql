# Write your MySQL query statement below
select sell_date , count(distinct product) num_sold , 
   group_concat( distinct product order by product separator ',') as products from
activities b
group by sell_date;