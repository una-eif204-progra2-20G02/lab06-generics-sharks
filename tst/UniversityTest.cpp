//
// Created by Karina Hernandez on 21-sep.-20.
//

#include <University.h>
#include <Professor.h>
#include "gtest/gtest.h"


TEST(UniversityTestSuite, professorList) {
    University<Professor*> university;
    Person* professor = new Professor();
    university.setName("Universidad Nacional");

    EXPECT_EQ(university.toString(),"Name: Universidad Nacional");
}