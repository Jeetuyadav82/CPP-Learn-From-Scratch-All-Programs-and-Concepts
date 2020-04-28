#include<iostream>

using namespace std;

template <class jeetu> // making template of function

jeetu Add(jeetu a,jeetu b)  // no need to type double add(double a,double b) and also int add(int a,int b)
{
	return a+b;
}

int main()
{
	double b =55.34,a=34;
	
	double z = Add(a,b);
	
	cout << "z (sum of double)= " <<z << endl;
	
	int c=34,d=34;
	
	int y =Add(c,d);
	
	cout << "y (sum of y)= "<<y <<endl;
}
