#include "jeetu.h"
#include <iostream>

using namespace std;

jeetu::jeetu(int num)
:h(num)
{
    //ctor
}

void jeetu::print()
{
    cout << "h=" << h<< endl;
    cout << "this->h = " << this->h << endl;
    cout << "(*this).h= " << (*this).h << endl;
}
