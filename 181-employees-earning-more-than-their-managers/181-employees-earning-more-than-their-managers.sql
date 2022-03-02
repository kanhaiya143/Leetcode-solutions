# Write your MySQL query statement below

select E.name as Employee from Employee E
where E.salary > (select M.salary from Employee M where E.managerId = M.id)