# Write your MySQL query statement below
# ALTER TABLE 
#     Employees
# ADD
#     bonus AS
#     (salary * 2);
    
SELECT 
    employee_id, IF(employee_id % 2 = 1 AND LEFT(name, 1) != "M", salary, 0) as "bonus"
FROM
    Employees
ORDER BY
    employee_id ASC

# SELECT
#     LEFT(name, 1)
# FROM
#     Employees;