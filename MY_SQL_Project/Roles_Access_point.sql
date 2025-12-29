-- DATABASE CODE----------------------------------------
create database instituteDB; -- THIS IS A SCHEMA
use instituteDB;

-- Counsellor Role
DROP ROLE IF EXISTS 'Counsellor';
CREATE ROLE Counsellor;
CREATE USER IF NOT EXISTS muskan IDENTIFIED BY 'muskan@123';
GRANT Counsellor TO muskan;
GRANT INSERT, UPDATE ON institutedb.student_infos TO muskan;
-- ---------------------------------------------------------
-- Admin Role
DROP ROLE IF EXISTS 'Admin';
CREATE ROLE Admin;
CREATE USER IF NOT EXISTS ridham IDENTIFIED BY 'ridham@123';
GRANT Admin TO ridham;
GRANT INSERT, SELECT, UPDATE, DELETE ON institutedb.student_records TO ridham;

-- -------------------------------------------------------

-- Student Role
DROP ROLE IF EXISTS Student;
CREATE ROLE Student;
CREATE USER IF NOT EXISTS shyaam IDENTIFIED BY 'shyaam@123';
GRANT Student TO shyaam;
GRANT SELECT ON institutedb.student_dashboards TO shyaam;

-- -------------------------------------------------------



