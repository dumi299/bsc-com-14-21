#pragma once

#include "Person.h"

Person::Person(){
    mWeight = 0.0;
    mFirstName = 0.0;
    mAge = 0.0;
}

Person::Person(float newWeight){
    mWeight = newWeight;
}

Person::~Person(){}

float Person::operator + (const Person& otherPerson){
    
}
