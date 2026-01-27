-- Last updated: 28/01/2026, 00:30:17
SELECT x, y, z, IF(x+y>z AND x+z>y AND y+z>x,'Yes','No') AS triangle FROM Triangle;