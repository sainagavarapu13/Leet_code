# Write your MySQL query statement below
select product_id , "store1" as store, store1 as price
from products 
where store1 is not null
UNion all
select product_id , "store2" as store, store2 as price
from products 
where store2 is not null
union all
SELECT product_id, 'store3' AS store, store3 AS price
FROM Products
WHERE store3 IS NOT NULL;;