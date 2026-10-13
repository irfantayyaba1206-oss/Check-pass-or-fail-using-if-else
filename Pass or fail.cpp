#include <iostream>
using namespace std;

int main()
{
	int pass;
	cout<<"Enter a password"<<endl;
	cin>>pass;
	if(pass==1234)
	{
		cout<<"Access granted"<<endl;
	}
	else
	{
		cout<<"Access denied"<<endl;
	}
}

