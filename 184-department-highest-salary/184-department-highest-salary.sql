select d.name as Department , e.name  as Employee , e.salary as Salary
From Employee e inner join Department d on d.id=e.departmentId
where (d.id,salary) 
In (select departmentId , max(salary) from Employee group by departmentId)

