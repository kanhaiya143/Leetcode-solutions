# Write your MySQL query statement below
select A.name as Customers from Customers A
where A.id not in (select B.customerId from Orders B)

#SELECT A.Name from Customers A
#WHERE A.Id NOT IN (SELECT B.CustomerId from Orders B)