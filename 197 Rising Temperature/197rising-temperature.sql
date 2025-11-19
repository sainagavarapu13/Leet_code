SELECT p.id
FROM Weather p
JOIN Weather t
    ON p.recordDate = t.recordDate + 1
WHERE p.temperature > t.temperature;
