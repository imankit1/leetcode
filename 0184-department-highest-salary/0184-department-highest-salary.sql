# Write your MySQL query statement below


select d.name as Department, e.name as Employee, e.salary as salary
from employee e left join department d on e.departmentId=d.id
where salary = (select max(salary) from employee e1 where e.departmentId=e1.departmentId)