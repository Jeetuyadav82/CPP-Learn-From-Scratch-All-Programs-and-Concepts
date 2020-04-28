#include<iostream>

using namespace std;

class MyClass{
	
	public:
		
		MyClass(string s) // Make the constructor of class itself very important concept.
		{
			setName(s);
		}
		
		void setName(string s)
		{
			name = s;
		}
		
		string getName()
		{
			return name;
		}
		
	private:
		string name;
		
};


int main()
{
	MyClass obj("hii jeetu is here");
	
	string p = obj.getName();
	
	cout << p;
	
}
