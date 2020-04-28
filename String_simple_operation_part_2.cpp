#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
	// integer value of charactors  and charactor value to integer
	char c;
	c = 'h'; // use single colun(' ')
	int a = int(c);
	cout << "integer ascii value of char is "<<a <<endl;
	
	int b=75;
	char d = char(b);
	cout << "char is "<<d <<endl;
	
	// 2 D array of string and access it
	
	string c1[3][3];
	for(int i=0;i<2;i++) 
	{
		for(int j=0;j<2;j++)
		{
			string p;
			cin >> p;
			c1[i][j]=p;
		}
	}
	
	for(int i=0;i<2;i++) 
	{
		for(int j=0;j<2;j++)
		{
			
			cout << c1[i][j] << " ";
		}
	}
	
	cout << endl;
	// asign a string from another between two index
	string str,str1,str2,str3,str4;
	str = "hii-how-r-u";
	int p=str.length();  // length = 11
	
	str1.assign(str, 0, p); // it will take 11 element from 0 index
	
	str2.assign(str ,4,3); // it will take next 3 element from 4 index
	cout << str1 << endl << str2<<endl;
	
	
	// assign whole string into another
	str3="fggfgbff";
	str4=str3;
	cout << str3<<endl<<str4;
	
	
}
