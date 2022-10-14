# Write your MySQL query statement below
    
SELECT
    user_id, CONCAT(UPPER(LEFT(name, 1)), LOWER(SUBSTRING(name, 2, LENGTH(name)))) as "name"
FROM 
    Users
ORDER BY
    user_id ASC;