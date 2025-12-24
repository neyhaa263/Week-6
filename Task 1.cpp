#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the value of num:"<<endl;
	cin>>num;
	
	if(num > 0)
	{
		cout<<"The number you entered is positive."<<endl;
	}
	else if(num < 0)
	{
		cout<<"The number you entered is negative."<<endl;
	}
	else
	{
		cout<<"The number you entered is zero."<<endl;
	}
	
	return 0;
	
}
