# Write your MySQL query statement below


select d.name as Department, e.name as Employee, e.salary as Salary
from employee e inner join department d 
on e.departmentId = d.id

having 3 > (select count(distinct(e2.salary)) from employee e2 where e2.salary > e.salary and e.departmentId = e2.departmentId)


