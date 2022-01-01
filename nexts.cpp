#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter the numbe as you want :"<<endl;
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"Dispay sum of natural number:"<<sum<<endl;
	return 0;
}
