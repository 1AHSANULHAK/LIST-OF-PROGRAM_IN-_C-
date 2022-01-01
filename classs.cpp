#include<iostream>
using namespace std; 
class Employee
{
	public:
		int id;
	string name;
		float salary;
		Employee(int i,string n, float s)
		
		
		{
			id=i;
			name=n;
			salary=s;
			
		}
		display()
		{
			cout<<id<<" "<< name<< " "<<salary<<" "<<endl;
			
		}
};
int main()
{
	Employee s1;
	s1.Employee(306,"Ahsanulhak",450000);
	s1.display();
	return 0;
}
