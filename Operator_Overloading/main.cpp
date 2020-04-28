#include <iostream>
#include "sally.h"
using namespace std;

int main()
{
    sally a(35);
    sally b(10);

    sally c;

    c=a+b;

    cout << c.num << endl;
}
