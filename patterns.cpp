#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter your number :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		
	}
}
