USE qtest

CREATE TABLE Department (
    dep_id INT NOT NULL IDENTITY(1,1),
    dep_name varchar(255) NOT NULL,
    dep_salary integer NOT NULL,
    PRIMARY KEY (dep_id)
); 

CREATE TABLE Employee (
    emp_id INT NOT NULL IDENTITY(1, 1),
    emp_name varchar(255) NOT NULL,
    emp_salary varchar(255) NOT NULL,
    PRIMARY KEY (emp_id)
); 

CREATE TABLE Employed(
    empl_id INT NOT NULL IDENTITY(1,1),
    dep_id integer NOT NULL,
    emp_id integer NOT NULL,
    PRIMARY KEY (empl_id)
); 


INSERT INTO Department (dep_name, dep_salary) VALUES 
('����� ����������',300),
('����� ��������� � ����',200),
('����� ����������',100),
('�������� �����',150),
('����� �������� � �������',300),
('����� ������� ����',300),
('����� �������� ��������',300),
('����� ������� ���������',200),
('����� ������� ������',100),
('����� ������',150)
;

INSERT INTO Employee (emp_name, emp_salary) VALUES 
('���� �����',500),
('���� �����������',300),
('������ �������������',100),
('����� �������',555),
('������� ����������',777),
('������� ����������',101),
('���� ���������',300),
('������ ���������',100),
('��� ��������',555),
('���� ���������',777),
('����� ���������',101),
('������� ���������',300),
('���� ���',555),
('��������� �������',777),
('����� ���������',101),
('������ ��������',300)
;


INSERT INTO Employed (emp_id, dep_id) VALUES 
(1,1),
(1,4),
(1,8),
(1,9),
(2,1),
(3,1),
(4,3),
(4,10),
(4,7),
(5,2),
(5,8),
(6,3),
(7,5),
(8,3),
(8,10),
(9,4)
;


--������ ���������� �����
ALTER TABLE department ADD CONSTRAINT un_dep_id_constraint UNIQUE (dep_id);
ALTER TABLE employee ADD CONSTRAINT un_emp_id_constraint UNIQUE (emp_id);
ALTER TABLE employed ADD CONSTRAINT un_empl_id_constraint UNIQUE (empl_id);

--������� ��������� �����
ALTER TABLE Employed ADD CONSTRAINT emp_id_fk_constraint 
FOREIGN KEY (emp_id) REFERENCES Employee (emp_id)
ON UPDATE CASCADE ON DELETE CASCADE;

ALTER TABLE Employed ADD CONSTRAINT dep_id_fk_constraint 
FOREIGN KEY (dep_id) REFERENCES Department (dep_id)
ON UPDATE CASCADE ON DELETE CASCADE;
