#include <iostream>
#include "People.h"
#include "Birthday.h"

using namespace std;

int main()
{
    Birthday birthObj(9,10,1998);
    People jeetu("Jeetu ",birthObj);
    jeetu.printInfo();
}
