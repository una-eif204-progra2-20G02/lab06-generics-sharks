//
// Created by Karina Hernandez on 21-sep.-20.
//

#include <Professor.h>
#include "gtest/gtest.h"

TEST(ProfessorTestSuite, ChecktoString){
    Professor professor;
    professor.setFirstName("Pedro");
    professor.setLastName("Sanchez");
    professor.setDocumentId(1286608618);(
    professor.setmonthlySalary(1000000.00);
    professor.setcommissionRate(0.05);

    EXPECT_EQ(professor.toString()," ");
}