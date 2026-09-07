# Write your MySQL query statement below
(select 
    s.student_id , 
    s.student_name , 
    e.subject_name , 
    count(*) as attended_exams 
from 
    students s 
join 
    examinations e 
    on 
        s.student_id = e.student_id
group by 
    e.student_id ,
    e.subject_name,
    s.student_name )
union 
( select 
    s.student_id,
    s.student_name,
    b.subject_name,
    0 AS attended_exams 
from
    students s cross join subjects b
where (s.student_id , b.subject_name) not in (
    select student_id , subject_name 
    from examinations
))
order by student_id , subject_name
;
