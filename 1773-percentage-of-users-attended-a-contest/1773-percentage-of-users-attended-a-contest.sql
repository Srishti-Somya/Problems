# Write your MySQL query statement below
SELECT r.contest_id, ROUND((COUNT(DISTINCT(r.user_id))/(Select COUNT(user_id) from users))*100, 2) as percentage
from Register r
-- on u.user_id = r.user_id
group by contest_id
order by percentage desc, contest_id asc;
