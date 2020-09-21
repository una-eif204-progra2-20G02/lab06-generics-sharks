//
// Created by Karina Hernandez on 21-sep.-20.
//

#include <Administrative.h>
#include "gtest/gtest.h"

/*Test que prueba si el toString de la clase Administrative funciona correctamente*/

TEST(AdministrativeTestSuite, ChecktoString){
    Administrative administrative;
    administrative.setFirstName("Cristian");
    administrative.setLastName("Artavia");
    administrative.setDocumentId(502580654);
    administrative.setMonthlySalary(1975219.00);

    EXPECT_EQ(administrative.toString(),"Administrative Information: Cristian Artavia\n"
                                        "Doc Id: 502580654, Monthly Salary: 1975219.00");
}