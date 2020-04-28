#include<iostream>

using namespace std;

class jeetu{
	public:
		int publicV;
	protected:
		int protectedV;
	private:
		int privateV;
	
};

class mannu : public jeetu{
	public:
		void assignValue()
		{
			publicV = 5;
			protectedV =10;
			//privateV = 15;  we cant assign privateV here because this is private variable and private is accesable whithin the class
			
			cout << publicV <<" " <<protectedV<<endl;
		}
};

int main()
{
	mannu obj;
	obj.assignValue();
	
	
}
