#include<iostream>

using namespace std;

template <class first, class second>

first smaller(first a,second b)
{
	return (a>b?b:a);
}


int main()
{
	int a=45;
	double b=23.45;
	
	cout << smaller(a,b) << endl; 
	
	cout << smaller(b,a); 
}
