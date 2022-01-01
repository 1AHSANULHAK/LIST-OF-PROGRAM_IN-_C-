#include<iostream>
using namespace std;
class employee
{
	public:
		func()
		{
			cout<<"I am talking about default constructor "<<endl;
			
		}
};
int main()

{
for(int i=1;i<=10;i++)
{

	employee e1[i];
	cout<< e1[i].func()<<endl;
}
	
	
	return 0;
}
