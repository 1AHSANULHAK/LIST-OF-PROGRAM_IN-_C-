#include<iostream>
using namespace std;
int main()
{
	char x;
	cout<<"Enter anything as you wish "<<endl;
	cin>>x;
	if(x=='A')
	{
		cout<<"upper case "<<endl;
		
	}
	else
	{
		if(x=='a')
		{
			cout<<"lower case "<<endl;
		}
		else 
		{
			cout<<"numeric"<<endl;
		}
	}
	return 0;
}
