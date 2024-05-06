#pragma once

#include <string>

using namespace std;

class Person{
    public:
        Person();
        Person(float newWeight);
        ~Person();

        // overload the add operator
        float operator + (const Person& otherPerson);

         // Overload the equality operator
    bool operator == (const Person& otherPerson);

    // Overload the inequality operator
    bool operator != (const Person& otherPerson);



       // Overload the less than operator
    bool operator < (const Person& otherPerson);

    // Overload the greater than operator
    bool operator > (const Person& otherPerson);



    private:
        float mWeight;
        string mFirstName;
        int mAge;
};