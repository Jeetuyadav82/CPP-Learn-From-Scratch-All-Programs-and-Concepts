#include<iostream>

using namespace std;

void PrintNumber(int a)
{
	cout << "print Integer " << a<<endl;
}
void PrintNumber(float b)
{
	cout << "print float "<< b<<endl;
} 

int main()
{
	int a=10;
	float b=20.5067;
	
	PrintNumber(a); // call same function but will pass which taking integer 
	PrintNumber(b);
	
}
