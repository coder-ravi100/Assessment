#DATABASE NAME SQL_PROJECT _DB  
CREATE DATABASE SQL_PROJECT_DB;
USE SQL_PROJECT_DB;

CREATE TABLE Country (
    id INT PRIMARY KEY,
    country_name VARCHAR(100),
    country_name_eng VARCHAR(100),
    country_code VARCHAR(10)
);

CREATE TABLE City (
    id INT PRIMARY KEY,
    city_name VARCHAR(100),
    lat DECIMAL(10, 6),
    longitude DECIMAL(10, 6),
    country_id INT,
    FOREIGN KEY (country_id) REFERENCES Country(id)
);

CREATE TABLE Customer (
    id INT PRIMARY KEY,
    customer_name VARCHAR(100),
    city_id INT,
    customer_address VARCHAR(255),
    next_call_date DATE,
    ts_inserted TIMESTAMP,
    FOREIGN KEY (city_id) REFERENCES City(id)
);

INSERT INTO Country (id, country_name, country_name_eng, country_code) VALUES
(1, 'Deutschland', 'Germany', 'DEU'),
(2, 'Srbija', 'Serbia', 'SRB'),
(3, 'Hrvatska', 'Croatia', 'HRV'),
(4, 'United States of America', 'United States of America', 'USA'),
(5, 'Polska', 'Poland', 'POL'),
(6, 'España', 'Spain', 'ESP'),
(7, 'Rossiya', 'Russia', 'RUS');

INSERT INTO City (id, city_name, lat, longitude, country_id) VALUES
(1, 'Berlin', 52.520000, 13.404954, 1),
(2, 'Belgrade', 44.787197, 20.457273, 2),
(3, 'Zagreb', 45.815399, 15.966568, 3),
(4, 'New York', 40.730610, -73.935242, 4),
(5, 'Los Angeles', 34.052235, -118.243683, 4),
(6, 'Warsaw', 52.237049, 21.017532, 5);

INSERT INTO Customer (id, customer_name, city_id, customer_address, next_call_date, ts_inserted) VALUES
(1, 'Jewelry Store', 1, 'Long Street 120', '2020-01-21', '2020-01-10 14:01:20.000'),
(2, 'Bakery', 1, 'Kurfürstendamm 25', '2020-01-21', '2020-01-09 17:05:12.000'),
(3, 'Café', 1, 'Tauentzienstraße 44', '2020-01-21', '2020-01-10 08:02:49.000'),
(4, 'Restaurant', 3, 'Ulica lipa 15', '2020-01-21', '2020-01-10 09:20:21.000');

SELECT 
    co.country_name_eng AS country_name,
    ci.city_name,
    cu.customer_name
FROM 
    Country co
LEFT JOIN 
    City ci ON co.id = ci.country_id
LEFT JOIN 
    Customer cu ON ci.id = cu.city_id;

SELECT 
    co.country_name_eng AS country_name,
    ci.city_name,
    cu.customer_name
FROM 
    Country co
INNER JOIN 
    City ci ON co.id = ci.country_id
LEFT JOIN 
    Customer cu ON ci.id = cu.city_id;


