# Write your MySQL query statement below

select customer_number from orders 
group by customer_number
having count(customer_number) = 
(select max(dum.e1) from
(select count(customer_number) as e1
from orders 
group by customer_number) as dum)