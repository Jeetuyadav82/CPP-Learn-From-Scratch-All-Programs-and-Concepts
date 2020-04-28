#include<iostream>

using namespace std;

int var = 10; // it can be access from any functio its call global veriable

void bucky()
{
	cout << var ;
}

int main()
{
	int var = 20; // local variable
	cout << var << endl;
	cout << ::var << endl; // using :: we call global variable
	bucky();
}
