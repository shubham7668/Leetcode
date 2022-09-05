# Write your MySQL query statement below
SELECT name FROM salesperson
where sales_id not in
(SELECT sales_id FROM orders
LEFT JOIN
company 
ON orders.com_id=company.com_id 
WHERE company.name='RED')