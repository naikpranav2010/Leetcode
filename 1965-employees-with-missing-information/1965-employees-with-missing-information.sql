# Write your MySQL query statement below
SELECT
EMPLOYEE_ID
FROM(
    SELECT 
    E.EMPLOYEE_ID EMPLOYEE_ID, E.NAME NAME, S.SALARY SALARY
    FROM
    EMPLOYEES E
    LEFT JOIN
    SALARIES S ON E.EMPLOYEE_ID = S.EMPLOYEE_ID
    UNION
    SELECT 
    S.EMPLOYEE_ID EMPLOYEE_ID, E.NAME NAME, S.SALARY SALARY
    FROM
    EMPLOYEES E
    RIGHT JOIN
    SALARIES S ON E.EMPLOYEE_ID = S.EMPLOYEE_ID
) AS ES
WHERE
NAME IS NULL OR SALARY IS NULL
ORDER BY
EMPLOYEE_ID ASC