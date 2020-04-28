#include<iostream>

using namespace std;

void printSomething()
{
	cout << "void to print only (no return)"<<endl;
}

int returnSomething(int a,int b)
{
	return a+b;
}



int main()
{
	printSomething();
	
	int p=returnSomething(1,2);
	
	cout << p;
	
	return 0;
}
