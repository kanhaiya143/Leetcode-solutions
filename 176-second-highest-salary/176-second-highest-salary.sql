# Write your MySQL query statement below
select salary as SecondHighestSalary from Employee 

union select NULL order by secondHighestSalary desc limit 1 offset 1