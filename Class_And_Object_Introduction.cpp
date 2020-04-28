#include<iostream>

using namespace std;

class MyFirstClass{
	public:
		void PrintSome()
		{
			cout << "hi how r u"<<endl;
		}
		
		int ReturnSome(int a,int b)
		{
			return a+b;
		}
};

int main()
{
	MyFirstClass ObjectOfClass; // make the object of class (like instance in java)
	
	ObjectOfClass.PrintSome();
	
	int x=ObjectOfClass.ReturnSome(2,5);
	
	cout << x;
	
}
