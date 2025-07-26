/* Write your PL/SQL query statement below */
select firstName,lastName,city, state from
person left join address
on person.personID = address.personID;