#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	
	// to write in the file :-
	
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
	
	// now to read the file :-
	
	
	ifstream jeetu;
	jeetu.open("player.txt");
	
	cout<< "players id  name  money are following :-"<<endl;
	
	int id;
	string name;
	double money;
	
	while(jeetu >> id >> name >> money)
	{
		cout <<id <<" "<< name << " " << money <<endl;
	}
	
	jeetu.close();
}
