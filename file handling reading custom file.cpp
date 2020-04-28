#include<iostream>
#include<fstream>

using namespace std;

int main()
{
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
