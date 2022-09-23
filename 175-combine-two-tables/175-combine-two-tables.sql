# Write your MySQL query statement below
Select firstName,lastName,Address.city,Address.state from Person
left join Address
on Person.personId=Address.personId
