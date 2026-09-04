# Write your MySQL query statement below
select s.name , sum(t.amount) as balance from
users s join transactions t on s.account = t.account
group by s.account
having sum(t.amount) > 10000;