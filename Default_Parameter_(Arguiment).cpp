#include<iostream>

using namespace std;

int volume(int a=2,int b=2,int c=2);  // 

int main()
{
	cout << volume()<<endl;  // here take all parameter from upper volume function.
	
	cout << volume(5)<<endl; // here take first 5 and rest from upper volume fun.
	
	cout << volume(5,5)<<endl; // here take 5 and 5 and rest from fun
	
	cout << volume(5,5,5)<<endl; // here take all no one from fun
}

int volume(int a,int b,int c)
{
	return a*b*c;
}
