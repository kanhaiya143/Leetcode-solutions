# Write your MySQL query statement below
select * from Cinema C
where (C.id%2=1) AND C.description != 'boring' order by C.rating desc
