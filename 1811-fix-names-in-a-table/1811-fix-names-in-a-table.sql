# Write your MySQL query statement below
Select user_id, concat(upper(Substring(name, 1, 1)), lower(Substring(name, 2))) as name from users order by user_id;