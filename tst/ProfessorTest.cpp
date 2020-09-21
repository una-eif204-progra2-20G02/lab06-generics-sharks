//
// Created by Karina Hernandez on 21-sep.-20.
//

#include <Professor.h>
#include "gtest/gtest.h"

/*Test que prueba si el toString y el metodo salary() de la clase Professor funciona correctamente*/

TEST(ProfessorTestSuite, ChecktoStringandSalary){
    Professor professor;
    professor.setFirstName("Pedro");
    professor.setLastName("Sanchez");
    professor.setDocumentId(1286608618);
    professor.setmonthlySalary(1000000.00);
    professor.setcommissionRate(0.05);

    EXPECT_EQ(professor.salary(),1050000.00);
    EXPECT_EQ(professor.toString(),"Professor Information: Pedro Sanchez\n"
                                   "Doc Id: 1286608618, Monthly Salary: 1050000.00");
}