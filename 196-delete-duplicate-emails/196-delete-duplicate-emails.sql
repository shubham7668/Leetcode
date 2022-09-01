# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below

#self join
delete p1
from person p1
join person p2
where p1.id>p2.id and p1.email=p2.email