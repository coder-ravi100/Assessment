#DATABASE NAME SQL_PROJECT _DB  
CREATE DATABASE SQL_PROJECT_DB;
USE SQL_PROJECT_DB;

-- Country table
CREATE TABLE country (
    country_id INT PRIMARY KEY,
    country_name VARCHAR(50),
    country_code VARCHAR(7)
);

-- Country data
INSERT INTO country VALUES
(1, 'Germany','DEU'),
(2, 'Croatia','SRB'),
(3, 'USA','HRV'),
(4, 'Spain','HRV'),
(5, 'Russia','USA'),
(6,'Spain','ESP'),
(7,'Poland','POL');


-- City table
CREATE TABLE city (
    city_id INT PRIMARY KEY,
    city_name VARCHAR(50),
    country_id INT,
    lst FLOAT,
    Longs FLOAT,
    FOREIGN KEY (country_id) REFERENCES country(country_id)
);

-- City data 
INSERT INTO city VALUES
(1, 'Berlin', 52.5200008,13.404954, 1),    
(2, 'Belgrade', 44.787197,20.457273, 2),     
(3, 'Zagrade', 45.815399, 15.966568, 3),
(4, 'New York',40.730610,-73935242, 4),
(5, 'Los Angeles', 34.052235,-118.243683,4),
(6, 'Warsaw' , 52.237049, 21.017532, 5);



