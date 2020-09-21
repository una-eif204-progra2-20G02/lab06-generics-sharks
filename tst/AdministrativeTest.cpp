//
// Created by Karina Hernandez on 21-sep.-20.
//

#include <Administrative.h>
#include "gtest/gtest.h"


TEST(AdministrativeTestSuite, ChecktoString){
    Administrative administrative;
    administrative.setFirstName("Cristian");
    administrative.setLastName("Artavia");
    administrative.setDocumentId(502580654);
    administrative.setMonthlySalary(1975219.00);

    EXPECT_EQ(administrative.toString(),"");
}