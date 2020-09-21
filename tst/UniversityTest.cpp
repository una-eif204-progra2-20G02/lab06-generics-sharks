//
// Created by Karina Hernandez on 21-sep.-20.
//

#include <University.h>
#include <Professor.h>
#include <Administrative.h>
#include <Person.h>
#include "gtest/gtest.h"

/*Unit test que verifica si add top o erase de un objeto tipo Professor en el vector de la clase University funciona correctamente*/

TEST(UniversityTestSuite, professorList) {
    University<Person*> university;
    Person* professor = new Professor("Mike","Guzman",1234567890,1500000.00, 0.05);
    university.setName("Universidad Nacional");

    EXPECT_EQ(university.toString(),"Name: Universidad Nacional");
    //EXPECT_EQ(university.getList(),"");
    EXPECT_TRUE(university.addElement(professor));
    EXPECT_TRUE(university.top());
    EXPECT_TRUE(university.eraseElem());
}

/*Unit test que verifica si add top o erase de un objeto tipo Administrative
 * en el vector de la clase University funciona correctamente*/

TEST(UniversityTestSuite, administrativeList) {
    University<Person*> university;
    Person* administrative = new Administrative("Mike","Guzman",1234567890,1500000.00);
    university.setName("Universidad Nacional");

    EXPECT_EQ(university.toString(),"Name: Universidad Nacional");
    //EXPECT_EQ(university.getList(),"");
    EXPECT_TRUE(university.addElement(administrative));
    EXPECT_TRUE(university.top());
    EXPECT_TRUE(university.eraseElem());
}