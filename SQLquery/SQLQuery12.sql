USE qtest;

SELECT * FROM (Department JOIN Employed USING (dep_id)) JOIN Employee USING (emp_id) WHERE Department.dep_name = 'отдел ковыряния в носу';