#include<iostream>

using namespace std;

class MyClass{
	
	public:
		void SetName(string s)
		{
			name = s;
		}
		
		string GetName()
		{
			return name;
		}
	
	private:
		string name;
};

int main()
{
	MyClass obj;// make object of class
	
	obj.SetName("Jeetu is here");
	
	string p = obj.GetName();
	
	cout << p;
	
	
}
