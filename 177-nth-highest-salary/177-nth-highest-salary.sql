CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
DECLARE X INT;
SET X=N-1;
  RETURN (
      # Write your MySQL query statement below.
      select salary from Employee
      union select null order by salary desc limit 1 offset X
      
  );
END