//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef GENERICS_SHARKS_UNIVERSITY_H
#define GENERICS_SHARKS_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

class University {
  public:
    University();
    University(string);
    University(string,Professor*,Administrative*);
    string getName();
    void setName(string);
    Professor* getProfessor();
    void setProfessor(Professor *professor);
    Administrative* getAdministrative();
    void setAdministrative(Administrative *administrative);
    void addProfessor(Professor *professor);
    string getListProfessor();
    void addAdministrative(Administrative *administrative);
    string getListAdministrative();

  private:
    string name;
    Professor* professor;
    Administrative* administrative;
    vector<Professor*> professorList;
    vector<Administrative*> administrativeList;
};


#endif //GENERICS_SHARKS_UNIVERSITY_H
