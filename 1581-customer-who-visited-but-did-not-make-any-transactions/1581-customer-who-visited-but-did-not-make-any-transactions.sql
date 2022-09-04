# Write your MySQL query statement below
select customer_id, count(v.visit_id) as count_no_trans
from visits v
left join transactions t
on v.visit_id=t.visit_id
where t.visit_id is NULL
group by customer_id
order by count_no_trans DESC