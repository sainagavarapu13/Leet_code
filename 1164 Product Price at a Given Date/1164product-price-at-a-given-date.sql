WITH cte AS (
    SELECT 
        product_id,
        new_price,
        RANK() OVER (
            PARTITION BY product_id 
            ORDER BY change_date DESC
        ) AS ran
    FROM Products
    WHERE change_date <= '2019-08-16'
)

SELECT 
    p.product_id,
    CASE 
        WHEN c.new_price IS NULL THEN 10
        ELSE c.new_price
    END AS price
FROM (
    SELECT DISTINCT product_id
    FROM Products
) p
LEFT JOIN cte c
    ON p.product_id = c.product_id
    AND c.ran = 1;