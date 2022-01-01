 #include<iostream>
 using namespace std;
 int main()
 {
 	int n;
 	cout<<"Enter number to check prime or not ";
 	cin>>n;
 	for(int i=2;i<=n/2;i++)
 	{
 		if(n%i==0)
 		{
 			cout<<"number is not prime "<<i<<endl;
		 }
	
		 else{
		 	cout<<"number is prime"<<endl;
		 }
}
	 return 0;
 	
 }
