# Write your MySQL query statement below
select name , sum(
    case
        when r.distance is not null then r.distance
        else 0
    end ) as travelled_distance from
users s left join rides r on
s.id = r.user_id
group by r.user_id
order by travelled_distance desc , name asc;