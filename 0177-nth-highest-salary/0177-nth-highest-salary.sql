CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  DECLARE I INT;
  SET I = N - 1;
  RETURN (
      # Write your MySQL query statement below.
      
      SELECT(
          SELECT
          DISTINCT(SALARY)
          FROM 
          EMPLOYEE
          ORDER BY
          SALARY DESC
          LIMIT 1 OFFSET I
          
      )
  );
END