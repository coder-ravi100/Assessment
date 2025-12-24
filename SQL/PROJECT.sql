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
    FOREIGN KEY (country_id) REFERENCES country(country_id)
);

-- City data 
INSERT INTO city VALUES
(1, 'Berlin', 1),    
(2, 'Belgrade', 2),     
(3, 'Zagrade', 3),
(4, 'New York', 4),
(5, 'Los Angeles', 4),
(6, 'Warsaw' , 5);


-- Customer table
CREATE TABLE customer (
    customer_id INT PRIMARY KEY,
    customer_name VARCHAR(50),
    city_id INT,
    FOREIGN KEY (city_id) REFERENCES city(city_id)
);

-- Customer data 
INSERT INTO customer VALUES
(1, 'Jewelry', 1),     
(2, 'Bakery', 1),    
(3, 'Cafe', 2),   
(4, 'Resturant', 3);   


