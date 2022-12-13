create database if not exists mcq;
use mcq;
create table if not exists question(
    no int auto_increment,
    question varchar(255),
    option1 varchar(255),
    option2 varchar(255),
    option3 varchar(255),
    answer varchar(255),
    primary key(no)
);