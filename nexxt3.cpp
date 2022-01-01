#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum=0;
	
	cout<<"Enter the number :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		sum=sum+i;
		
	}
	cout<<"The sum of the  given number is "<<sum<<endl; 
	return 0;
}
