SELECT B.name as Employee
FROM Employee A
JOIN Employee B
ON A.id = B.managerId
WHERE B.salary > A.salary;