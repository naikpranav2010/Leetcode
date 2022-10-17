# Write your MySQL query statement below
SELECT
DATE_ID, MAKE_NAME, COUNT(DISTINCT(LEAD_ID)) UNIQUE_LEADS, COUNT(DISTINCT(PARTNER_ID)) UNIQUE_PARTNERS
FROM
DAILYSALES
GROUP BY
DATE_ID, MAKE_NAME