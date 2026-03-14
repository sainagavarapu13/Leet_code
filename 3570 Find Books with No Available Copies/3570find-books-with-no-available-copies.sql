# Write your MySQL query statement below
with cte as 
(
select book_id , count(*) as cnt,return_date from borrowing_records 
group by book_id,return_date
) 
select l.book_id,
       l.title,
       l.author,
       l.genre,
       l.publication_year,
       c.cnt as current_borrowers  from library_books l join cte c 
       on l.book_id = c.book_id
where c.cnt = (select l.total_copies  from library_books l where c.book_id =l.book_id )
and return_date is null 
order by current_borrowers  desc , l.title;

