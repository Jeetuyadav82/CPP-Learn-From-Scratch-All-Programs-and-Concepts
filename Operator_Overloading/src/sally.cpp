#include <iostream>
#include "sally.h"
using namespace std;

sally::sally()
{

}

sally::sally(int a)
{
    num=a;
}

sally sally::operator+(sally aso)
{
    sally newvar;
    newvar.num =num + aso.num;
    return newvar;
}
