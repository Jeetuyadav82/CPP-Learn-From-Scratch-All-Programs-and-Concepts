#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream jeetu;
	jeetu.open("player.txt");
	
	cout<< "enter player ID , Name and money"<<endl;
	
	cout<<"press CTRL+z to exit \n";
	
	int id;
	string name;
	double money;
	
	while(cin >> id >> name >> money)
	{
		jeetu <<id <<" "<< name << " " << money <<endl;
	}
	
	jeetu.close();
}
