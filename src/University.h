//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef GENERICS_SHARKS_UNIVERSITY_H
#define GENERICS_SHARKS_UNIVERSITY_H

#include <vector>
#include <cassert>
#include <gtest/gtest.h>
#include "Person.h"

template <typename T>
class University {
  public:
    University();

    string getName();

    void setName(string name);

    void addElement(T const& elem);

    void eraseElem();

    T const& top();

    string toString();

    int size();

  private:
    string name;
    vector<T> list;
};

template<typename T>
string University<T>::getName() {
    return name;
}

template<typename T>
University<T>::University() {
    name = " ";
}

template<typename T>
void University<T>::setName(string name) {
    this->name = name;
}

template<typename T>
void University<T>::addElement(T const& elem) {
    list.push_back(elem);
}

template<typename T>
void University<T>::eraseElem() {
    assert(!list.empty());
    list.pop_back();
}

template<typename T>
T const& University<T>::top() {
    assert(!list.empty());
    return list.back();
}


template<typename T>
string University<T>::toString() {
    stringstream name;
    name<<"Name: "<<getName();
    return name.str();
}

template<typename T>
int University<T>::size() {
    return list.size();
}


#endif //GENERICS_SHARKS_UNIVERSITY_H
