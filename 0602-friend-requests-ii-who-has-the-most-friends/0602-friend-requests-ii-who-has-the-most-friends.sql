# Write your MySQL query statement below


-- select r.requester_id,
-- (select count(*) from requestAccepted r1 where r1.requester_id = r.requester_id or r1.accepter_id = r.requester_id) as num
-- from requestAccepted r


SELECT 
    id, 
    COUNT(*) AS num
FROM (
    SELECT requester_id AS id FROM requestAccepted
    UNION ALL
    SELECT accepter_id AS id FROM requestAccepted
) as combined_friends
GROUP BY id
ORDER BY num DESC
LIMIT 1;
