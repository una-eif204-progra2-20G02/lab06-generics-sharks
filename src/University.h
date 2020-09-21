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

    testing::AssertionResult addElement(T elem);

    testing::AssertionResult eraseElem();

    testing::AssertionResult top();

    T getList();

    string toString();

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
testing::AssertionResult University<T>::addElement(T elem) {
    list.push_back(elem);
}

template<typename T>
testing::AssertionResult University<T>::eraseElem() {
    assert(!list.empty());
    list.pop_back();
}

template<typename T>
testing::AssertionResult University<T>::top() {
    assert(!list.empty());
    list.back();
}

template<typename T>
T University<T>::getList() {
    return list;
}

template<typename T>
string University<T>::toString() {
    stringstream name;
    name<<"Name: "<<getName();
    return name.str();
}


#endif //GENERICS_SHARKS_UNIVERSITY_H
