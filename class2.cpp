#include<iostream>
using namespace std;
class student 
{
 public:
 	int id;
 	string empname;
 	float salary;
 	
};
int main()
{
	student s;
	s.id=1212;
	s.empname="Shashikant pandey";
	s.salary=12000000;
	cout<<"id "<<s.id<<endl;
	cout<<"name of the employee "<<s.empname<<endl;
	cout<<"salary of the employee"<<s.salary<<endl;
	return 0;
	
}
