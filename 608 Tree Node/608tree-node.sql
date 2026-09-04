# Write your MySQL query statement below
with parent as (
    select p_id from tree
)
select id , 
    case
        when p_id is null then 'Root'
        when id in (select * from parent) then 'Inner'
        else 'Leaf'
        end
    as type
from tree;