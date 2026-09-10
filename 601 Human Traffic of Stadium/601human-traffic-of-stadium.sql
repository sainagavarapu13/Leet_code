# Write your MySQL query statement below
select s.id , s.visit_date, s.people from
stadium s join
stadium s1 on s.id = s1.id 
join 
stadium s2 on s1.id = s2.id-1
join
stadium s3 on s1.id = s3.id-2
where s1.people >=100 and
        s2.people >=100
         and s3.people >=100
         and s.id in (s1.id, s2.id, s3.id)
union 
select s.id , s.visit_date, s.people from
stadium s join
stadium s1 on s.id = s1.id 
join 
stadium s2 on s1.id = s2.id+1
join
stadium s3 on s1.id = s3.id+2
where s1.people >=100 and
        s2.people >=100
         and s3.people >=100
         and s.id in (s1.id, s2.id, s3.id)
         

union 
# Write your MySQL query statement below
select s.id , s.visit_date, s.people from
stadium s join
stadium s1 on s.id = s1.id 
join 
stadium s2 on s1.id = s2.id+1
join
stadium s3 on s1.id = s3.id-1
where s1.people >=100 and
        s2.people >=100
         and s3.people >=100
         and s.id in (s1.id, s2.id, s3.id)
order by visit_date ;