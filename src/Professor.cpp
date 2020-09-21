//
// Created by Maikol Guzman on 8/2/20.
//
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

Professor::Professor():Person(){
  monthlySalary = 0.0;
  commissionRate = 0.05;
}

Professor::Professor(double monthlySalary ,double commissionRate){
  this->monthlySalary = monthlySalary;
  this->commissionRate = commissionRate;
}

Professor::Professor(string firstName, string lastName, int documentId, double monthlySalary, double commissionRate) :Person(firstName, lastName, documentId){
  this->monthlySalary = monthlySalary;
  this->commissionRate = commissionRate;
}

Professor::~Professor(){

}
double Professor::getmonthlySalary(){
  return monthlySalary;
}

double Professor::getcommissionRate(){
  return commissionRate;
}

void Professor::setmonthlySalary(double monthlySalary){
  this->monthlySalary = monthlySalary;
}

void Professor::setcommissionRate(double commissionRate){
  this->commissionRate = commissionRate;
}

double Professor::salary(){
  double netSalary;
  netSalary=getmonthlySalary()+(getmonthlySalary()*getcommissionRate());
  return netSalary;
}

string Professor::toString() {
  stringstream professor;
  professor<<"Professor Information: "<<getfirstName()<<" "<<getlastName()<<endl;
  professor<<"Doc Id: "<<getdocumentID()<<", Monthly Salary: "<< setprecision(2) << fixed <<salary();
  return professor.str();
}