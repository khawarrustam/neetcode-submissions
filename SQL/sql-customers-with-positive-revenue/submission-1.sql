-- Write your query below


select distinct customer_id
from customers
where revenue > 0 And year = 2020;