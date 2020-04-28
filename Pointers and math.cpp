#include<iostream>

using namespace std;

int main()
{
	int arr[5];
	
	int *add0 = &arr[0];
	int *add1 = &arr[1];
	int *add2 = &arr[2];
	
	cout << "add0 is at " << add0 << endl;
	cout << "add1 is at " << add1 << endl;
	cout << "add2 is at " << add2 << endl;
	
	add0++;
	cout << "add0 is now at " << add0 << endl;
	
	
	
}
