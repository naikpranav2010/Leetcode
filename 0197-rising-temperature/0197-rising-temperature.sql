# Write your MySQL query statement below
SELECT
W1.ID
FROM
WEATHER W1 
JOIN WEATHER W2 ON
DATEDIFF(W1.RECORDDATE, W2.RECORDDATE) = 1
WHERE
W1.TEMPERATURE > W2.TEMPERATURE
