-- Last updated: 28/01/2026, 00:30:41
SELECT Email FROM Person GROUP BY Email HAVING COUNT(*) > 1