# Write your MySQL query statement below
Select query_name,ROUND( AVG(q.rating/q.position), 2) as quality, 
ROUND((sum(rating<3)/(count(*)))*100, 2) as poor_query_percentage
from Queries q
group by query_name;