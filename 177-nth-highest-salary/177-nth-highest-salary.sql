CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
set N=N-1;
  RETURN (
      
      Select distinct salary from Employee order by salary desc
      limit 1 offset N
      
  );
END