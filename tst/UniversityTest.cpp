//
// Created by Karina Hernandez on 21-sep.-20.
//

#include <University.h>
#include <Professor.h>
#include <Person.h>
#include "gtest/gtest.h"


TEST(UniversityTestSuite, professorList) {
    University<Professor*> university;
    Person* professor = new Professor("Mike","Guzman",1234567890,1500000.00, 0.05);
    university.setName("Universidad Nacional");

    EXPECT_EQ(university.toString(),"Name: Universidad Nacional");
    EXPECT_EQ(university.getList()," ");
}