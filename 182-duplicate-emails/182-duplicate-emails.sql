# Write your MySQL query statement below
 
Select email from Person
Group by email
Having count(email)>1;
 
/*SELECT distinct p1.Email from Person p1
INNER JOIN Person p2
ON p1.Email = p2.Email
WHERE p1.Id <> p2.Id;
*/