#include<iostream>

using namespace std;

int main()
{
	int a;
	char c;
	double p;
	
	cout <<sizeof(a)<< endl<< sizeof(c) << endl << sizeof(p)<< endl;
	
	int arr[4] = {1,2,3,4};
	cout << sizeof(arr) << endl;
	
	int x= sizeof(arr)/sizeof(arr[0]);  // it will give array size or array length
	
	cout << x << endl;
	
}
