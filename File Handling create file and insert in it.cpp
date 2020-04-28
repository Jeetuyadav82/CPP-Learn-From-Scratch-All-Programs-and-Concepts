#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream jeetuFile;
	
	jeetuFile.open("jeetu.txt");  // create automatic new file if not exist in same directory
	
	if(jeetuFile.is_open())
	{
		cout << "jeetu's file is opening";
	}
	else
	{
		cout << "not find file";
	}
	
	jeetuFile << "file handling using c++";  // insert this line
	
	jeetuFile.close();
}
