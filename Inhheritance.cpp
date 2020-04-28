#include <iostream>


using namespace std;

class bally{
	public:
		void doSome()
		{
			cout << "yes  m here :-";
		}
		
};

class sally : public bally{
	
};


main()
{
	sally obj;
	obj.doSome();
	
	
	
	
	
	
	
}
