-- Student_records For Counsellor Table
CREATE TABLE student_infos (
    student_id INT PRIMARY KEY AUTO_INCREMENT,
    name VARCHAR(25) NOT NULL,
    course VARCHAR(50) NOT NULL,
    admission_date DATE
);

-- Teacher Table Admin/or Ridham
CREATE TABLE student_records (
    student_id INT,
    name VARCHAR(25),
    course_name VARCHAR(50),
    project_name VARCHAR(100),
    attendance_percentage FLOAT
);

-- Dashboard Table For Student

CREATE TABLE student_dashboards (
    name VARCHAR(25),
    course_name VARCHAR(50),
    admission_date DATE,
    project_name VARCHAR(100),
    attendance_percentage FLOAT
);

-- Trigger Create 

DELIMITER //
CREATE TRIGGER trg_insert_student_infos
AFTER INSERT ON student_infos
FOR EACH ROW
BEGIN
    INSERT INTO student_dashboards (name, course_name, admission_date)
    VALUES (NEW.name, NEW.course, NEW.admission_date);
END;
//
DELIMITER ;

DROP TRIGGER IF EXISTS trg_update_student_records;
DELIMITER //
CREATE TRIGGER trg_update_student_records
AFTER UPDATE ON student_records
FOR EACH ROW
BEGIN
    UPDATE student_dashboards
    SET project_name = NEW.project_name,
        attendance_percentage = NEW.attendance_percentage
    WHERE name = NEW.name AND course_name = NEW.course;
END;
//
DELIMITER ;

-- Only Insert Data from Admin 
DELIMITER //
CREATE TRIGGER trg_insert_student_records
AFTER INSERT ON student_records
FOR EACH ROW
BEGIN
    INSERT INTO student_dashboards (student_id,name,course_name,project_name,attendance_percentage)
    VALUES (NEW.project_name,NEW.attendance_percentage);
END;
//
DELIMITER ;
-- Extra Works

select * from student_dashboards;
select * from student_records;
select * from student_infos;
