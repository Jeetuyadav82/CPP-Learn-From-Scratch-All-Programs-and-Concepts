#include<iostream>

using namespace std;

int main()
{
	int fish = 5;
	
	cout << &fish << endl;
	
	int *fish_pointer;  // we need to use of pointer to store the address of fish
	
	fish_pointer = &fish;
	
	cout << fish_pointer << endl;
}
