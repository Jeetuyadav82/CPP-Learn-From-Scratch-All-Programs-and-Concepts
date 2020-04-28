/*
1.Virtual functions should be accessed using pointer or reference of base class type to achieve run time polymorphism.
2.The prototype of virtual functions should be same in base as well as derived class.
3.They are always defined in base class and overridden in derived class. It is not mandatory for derived class to override (or re-define the virtual function), in that case base class version of function is used.
4.A class may have virtual destructor but it cannot have a virtual constructor.*/

#include <iostream>  
using namespace std;  
class AB
{  
   int x=10;  
    public:  
    void display()  
    {  
        std::cout << "Value of x is : " << x<<std::endl;  
    }  
};  
class BC: public AB
{  
    int y = 16;  
    public:  
    void display()  
    {  
        std::cout << "Value of y is : " <<y<< std::endl;  
    }  
};  
int main()  
{  
    AB *a;  
    BC b;  
    a = &b;  
   a->display();  
    return 0;  
}  

