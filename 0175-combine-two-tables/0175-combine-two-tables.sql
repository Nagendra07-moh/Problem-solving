# Write your MySQL query statement below
Select firstName,LastName,city,state from Person left join Address on Person.PersonId = Address.PersonId;