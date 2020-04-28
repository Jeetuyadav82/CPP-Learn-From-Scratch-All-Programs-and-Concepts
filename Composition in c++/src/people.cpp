#include "people.h"
#include "Birthday.h"
#include <iostream>

using namespace std;
People::People(string x,Birthday bo)
:name(x),DateOfBirth(bo)
{
}

void People::printInfo()
{

    cout << name <<"was born on ";
    DateOfBirth.printDate();
}
