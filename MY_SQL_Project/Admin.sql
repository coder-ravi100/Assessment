--  ONLY SELECT AND DELETE COMMAND
use institutedb;
select * from student_records;
SHOW COLUMNS FROM student_records;

INSERT INTO student_records(student_id,name, course_name, project_name, attendance_percentage)
VALUES 
(NULL,NULL, NULL, 'Module 1', 98.90),
(NULL,NULL, NULL, 'Module 2', 77.98),
(NULL,NULL, NULL, 'Module 3', 89.43),
(NULL,NULL, NULL, 'Module 4', 91.50),
(NULL,NULL, NULL, 'Module 5', 87.25);

