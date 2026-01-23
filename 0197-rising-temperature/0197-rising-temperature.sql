SELECT w1.id
FROM Weather w1
WHERE EXISTS (
    SELECT 1
    FROM Weather w2
    WHERE w2.recordDate = DATE_ADD(w1.recordDate, INTERVAL -1 DAY)
      AND w1.temperature > w2.temperature
);
