#include "jeetu.h"
#include<iostream>

using namespace std;

jeetu::jeetu(int a,int b)
:RegVar(a),
constVar(b)
{
}

void jeetu::print()
{
    cout << "value of reg Variable is = " << RegVar << endl << "value of constant variable is = " << constVar <<endl;
}
