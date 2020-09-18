//
// Created by johne on 13/9/2020.
//

#ifndef GENERICS_SHARKS_PERSON_H
#define GENERICS_SHARKS_PERSON_H

#include <string>
#include <ostream>
#include <sstream>
using namespace std;
class Person {
public:
    Person();
    Person(string,string,int);
    virtual ~Person();
    string getfirstName();
    void setFirstName(string);
    string getlastName();
    void setLastName(string);
    int getdocumentID();
    void setDocumentId(int);
    virtual string toString() const;
    virtual double salary() const;

protected:

    string firstName;
    string lastName;
    int documentId;

};


#endif //GENERICS_SHARKS_PERSON_H
