//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef GENERICS_SHARKS_UNIVERSITY_H
#define GENERICS_SHARKS_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

template <typename T>
class University {
  public:
    University();
    University(string);
    //University(string,Professor*,Administrative*);
    string getName();
    void setName(string);
    T getProfessor();
    void setElement(Professor *professor);
    T getAdministrative();
    void setAdministrative(T administrative);
    void addProfessor(T professor);
    string getListProfessor();
    void addAdministrative(T administrative);
    string getListAdministrative();

  private:
    string name;
    Professor* professor;
    Administrative* administrative;
    vector<T> professorList;
    vector<T> administrativeList;
};


#endif //GENERICS_SHARKS_UNIVERSITY_H
