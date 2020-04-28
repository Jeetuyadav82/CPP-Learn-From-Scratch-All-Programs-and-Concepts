#include<iostream>
#include<numeric>
using namespace std;

void PrintArray(int arr[] ,int arr_size)
{
	
	for(int i=0;i<arr_size;i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[5] = {1,2,3,4,5}; // declare the user define array
	
	cout << arr[0] << arr[1] << arr[2] <<endl;
	
	
	// len or size of array
	int p = sizeof(arr) / sizeof(arr[0]);
	cout << p << endl;
	
	
	// sum of array 
	int sum=0;
	sum = accumulate(arr, arr+p, sum);
	cout << sum << endl;
	
	// pass array to functio
	
	PrintArray(arr,p);
	
}
