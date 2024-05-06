#pragma once

#include "Person.h"
using namespace std;

// Default constructor initializes member variables
Person::Person(){
    mWeight=0.0; 
    mFirstName="";
    mAge = 0;
    
}

// Parameterized constructor sets member variables based on input
Person::Person(float newWeight){
    mWeight = newWeight;
}

Person::~Person() {
    // Destructor
}

float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person& otherPerson) {
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) {
    return this->mFirstName != otherPerson.mFirstName;
}

bool Person::operator<(const Person& otherPerson) {
    return this->mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) {
    return this->mAge > otherPerson.mAge;
}