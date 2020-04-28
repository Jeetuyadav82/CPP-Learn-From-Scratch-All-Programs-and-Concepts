#include<iostream>

using namespace std;

class mother{
	public:
		mother()
		{
			cout << "hii i am constructor " << endl;
		}
		~mother()
		{
			cout << "hii i am deconstructor " << endl;
		}
};

class daughter : public mother{
	public:
		daughter()
		{
			cout << "hii i am constructor " << endl;
		}
		~daughter()
		{
			cout << "hii i am deconstructor " << endl;
		}
};



int main()
{
	mother obj;
	daughter jeetu;
	
	
	
}
