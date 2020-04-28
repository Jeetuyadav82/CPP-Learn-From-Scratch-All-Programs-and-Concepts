#include<iostream>  
#include <vector>
#include <algorithm>
using namespace std;  
int  main()  
{  
	// for strings
	string str1 = "This is C language";  
	string str2 = "C++";  
	cout << "Before replacement, string is :"<<str1<<'\n';  
	str1.replace(8,1,str2);   
	cout << "After replacement, string is :"<<str1<<'\n';  





	
	// for arrays
	int arr[] = { 10, 20, 30, 30, 20, 10, 10, 20 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // variable containing the old and new values 
    int old_val = 20, new_val = 99; 
      
    // print old array 
    cout << "Original Array:"; 
    for (int i = 0; i < n; i++) 
        cout << ' ' << arr[i]; cout << '\n'; 
          
    // Function used to replace the values 
    replace(arr, arr + n, old_val, new_val); 
  
    // new array after using std::replace 
    cout << "New Array:"; 
    for (int i = 0; i < n; i++) 
        cout << ' ' << arr[i]; cout << '\n'; 
}   

