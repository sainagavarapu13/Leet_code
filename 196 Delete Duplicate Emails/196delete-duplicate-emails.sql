# Write your MySQL query statement below
delete p from
person p join person s on s.email = p.email 
where p.id > s.id;