#include<iostream>

using namespace std;

int main()
{
	int a,b,sum,def,mul,div;
	
    cout << "enter first number";
    
	cin >> a;
	
	cout << "enter second number";
	
	cin >> b;
	
	sum=a+b;
	def=a-b;
	mul=a*b;
	div=a/b;
	
	float p=10;
	float q=3;
	float x=p/q;
	
	double i=10;
	double j=3;
	double k=i/j;
	cout << "sum = " << sum << endl;
	
	cout << "difference = " << def << endl;
	
	cout << "multiply = " << mul << endl;
	
	cout << "division = " << div << endl;
	
	cout << "float division = " << x << endl;
	
	cout << "double division = " << k << endl;
	
	return 0;
	
	
	
	
}
