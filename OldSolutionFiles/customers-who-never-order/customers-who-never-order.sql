# Write your MySQL query statement below
SELECT C.name AS "Customers"
FROM Customers C
WHERE NOT EXISTS (SELECT O.customerId
                  FROM Orders O
                  WHERE C.id = O.customerId);
