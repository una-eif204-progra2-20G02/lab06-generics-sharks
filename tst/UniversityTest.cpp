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
    university.addElement(professor);
    EXPECT_EQ(university.size(),1);
    university.eraseElem();
    EXPECT_EQ(university.size(),0);

}

/*Unit test que verifica si add top o erase de un objeto tipo Administrative
 * en el vector de la clase University funciona correctamente*/

TEST(UniversityTestSuite, administrativeList) {
    University<Person*> university;
    Person* administrative = new Administrative("Jesus","Garcia",706780156,1406400.00);
    university.setName("Universidad Nacional");

    EXPECT_EQ(university.toString(),"Name: Universidad Nacional");
    university.addElement(administrative);
    EXPECT_EQ(university.size(),1);
    university.eraseElem();
    EXPECT_EQ(university.size(),0);
}