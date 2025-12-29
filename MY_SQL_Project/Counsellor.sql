--  ONLY INSERT AND UPDATE COMMAND
use institutedb;
select  * from student_infos;

INSERT INTO student_infos (student_id,name, course, admission_date)
VALUES (null,'Ravi Arya', 'Software Developer', '2025-04-16');

INSERT INTO student_infos (student_id,name, course, admission_date)
VALUES (null,'Romil Raja', 'Frontend Developer', '2025-04-17');

INSERT INTO student_infos (name, course, admission_date)	
VALUES ('Jaydeep Singh', 'Backend Developer', '2025-04-18');

INSERT INTO student_infos (name, course, admission_date)
VALUES ('Mahesh Mourya', 'Machine Learning', '2025-04-19');

INSERT INTO student_infos (name, course, admission_date)
VALUES ('Dimple Pandit', 'Data Scientist', '2025-04-20');

INSERT INTO student_infos (name, course, admission_date)
VALUES ('Shyaam Solanki', 'Java Developer', '2025-04-21');
