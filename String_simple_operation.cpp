#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main()
{
	// Take String input().
	
	string str1,str2;
	/*
	cin >> str1;
	cout << str1 <<endl; // cin take line before or till space like we give input = "hii how r u" then it will take only "hii" not take after " "space
	*/
	getline(cin,str2);// getline will take input including " " space also
	cout << str2 << endl;
	
	// copy the string into char array 1. using function and another using for loop
	int a=str2.length();
	char arr[a];
	char arr1[a];
	
	strcpy(arr ,str2.c_str());
	cout << arr <<endl;
	
	for(int i=0;i<a;i++) // using for loop
	{
		arr1[i]=str2[i];
	}
	
	cout << arr1[a];
	
	
	
	
	
	
    	
	
	
}
