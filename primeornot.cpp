#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"To check number is prime or not "<< endl;
	cin>>n;
	for(int i=2;i<n/2;i++){
	

		if(n%i==0)
		{
			cout<<"number is not prime for :"<<i<<endl;
			
		}
		else
		{
			cout<<"number is prime for :"<<i<<endl;
			
		}
}
	return 0;
}
