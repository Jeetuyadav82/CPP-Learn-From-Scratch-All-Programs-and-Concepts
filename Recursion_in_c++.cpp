#include<iostream>

using namespace std;

int findFact(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		return x * findFact(x-1);
	}
}

int main()
{
	int a = findFact(5);
	cout << a<< endl;
}
