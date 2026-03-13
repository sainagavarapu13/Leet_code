# Write your MySQL query statement below
with cte as 
(
    select a1.machine_id as first_machine_id ,a1.process_id as first_process_id ,a1.activity_type as first_activity_type , a1.timestamp as first_timestamp ,a2.*
     from activity a1 join activity a2 
    on a1.machine_id = a2.machine_id and a1.process_id =a2.process_id 
    and a1.activity_type != a2.activity_type 
    and a1.activity_type = 'end'
)
select first_machine_id as machine_id , round(avg(first_timestamp-timestamp ),3) as processing_time from cte
group by first_machine_id;