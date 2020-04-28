#include<iostream>

using namespace std;

void PassByValue(int x) // here we taking the copy of jeetu not address
{
	x = 99;
}

void PassByReference(int *x) // here we taking the address of Raj 
{
	*x = 99;  // and we assign the address of raj = 99;
}

int main()
{
	int jeetu = 20;
	int Raj = 20;
	
	PassByValue(jeetu);
	PassByReference(&Raj);
	
	cout << "jeetu is now = " << jeetu << endl;
	cout << "Raj is now = " << Raj << endl;
	
}
