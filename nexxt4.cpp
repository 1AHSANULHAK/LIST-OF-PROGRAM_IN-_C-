#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number :";
	cin>>n;
	int i=1;
	int sum=0;
	while(i<=n)
	{
		sum=sum+2*i;
		i++;
	}
	cout<<"sum of all even number "<<sum<<endl;
	return 0;
}
