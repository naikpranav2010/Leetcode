# Write your MySQL query statement below
SELECT
E1.NAME AS Employee
FROM
EMPLOYEE AS E1, EMPLOYEE AS E2
WHERE
E1.MANAGERID = E2.ID AND E1.SALARY > E2.SALARY