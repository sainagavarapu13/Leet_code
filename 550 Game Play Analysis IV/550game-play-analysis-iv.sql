# Write your MySQL query statement below
select round(
    count(distinct a1.player_id)
    /
    (select count(distinct player_id ) from activity)
    ,2) as fraction
from activity a1 join activity  a2
on a1.player_id  =a2.player_id 
where datediff(a2.event_date ,a1.event_date )=1  
 AND a1.event_date =
(
    SELECT MIN(event_date) 
    FROM activity 
    WHERE player_id = a1.player_id
);

