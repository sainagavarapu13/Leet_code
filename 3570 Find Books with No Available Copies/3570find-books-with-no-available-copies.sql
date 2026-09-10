# Write your MySQL query statement below
with cnt as
(
    select * , sum(
        case when return_date is null then 1
        else 0
        end
    ) cou 
    from borrowing_records
    group by book_id
)
select l.book_id , title, author, genre , publication_year, cou as current_borrowers from 
library_books l join cnt b on l.book_id = b.book_id
where (cou-total_copies)=0
order by current_borrowers desc ,title ;