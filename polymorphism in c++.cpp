#include <iostream>
using namespace std;
class Parent {
public:
  void disp(){
     cout<<"Parent Class Function"<<endl;
  }
};
class Child: public Parent{
public:
  void disp(){
     cout<<"child Class Function";
  }
};
int main() {
  //Parent class object
  Parent obj;
  obj.disp();
  //Child class object
  Child obj2;
  obj2.disp();
  return 0;
}
