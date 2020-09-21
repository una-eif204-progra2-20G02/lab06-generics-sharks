//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative():Person(){
  monthlySalary = 0.0;
}

Administrative::Administrative(double monthlySalary){
  this->monthlySalary = monthlySalary;
}

Administrative::Administrative(string firstName, string lastName, int documentId, double monthlySalary) :Person(firstName, lastName,documentId){
  this->monthlySalary = monthlySalary;
}

void Administrative::setMonthlySalary(double monthlySalary){
  this->monthlySalary = monthlySalary;
}

double Administrative::getMonthlySalary(){
  return monthlySalary;
}

double Administrative::salary(){
  return getMonthlySalary();
}

string Administrative::toString() {
  stringstream administrative;
  administrative<<"Administrative Information: "<<getfirstName()<<" "<<getlastName()<<endl;
  administrative<<"Doc Id: "<<getdocumentID()<<","<<" Monthly Salary: "<< setprecision(2) << fixed <<salary();
  return administrative.str();
} 