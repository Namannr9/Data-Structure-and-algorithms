CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
set N=N-1;
  RETURN (
      
      Select distinct salary from Employee order by salary desc
      limit 1 offset N
      /*
        SELECT DISTINCT Salary
        FROM Employee e1
        WHERE N-1 = (SELECT COUNT(DISTINCT Salary) FROM Employee e2 WHERE e1.Salary <               e2.Salary)
      */
      
  );
END