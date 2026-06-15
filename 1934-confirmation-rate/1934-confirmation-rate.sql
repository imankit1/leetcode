# Write your MySQL query statement below


select s.user_id, round(ifnull((select count(*) from confirmations c1 where s.user_id=c1.user_id and c1.action="confirmed")/count(c.user_id), 0), 2) as confirmation_rate

from signups s left join confirmations c
on s.user_id=c.user_id
group by s.user_id;