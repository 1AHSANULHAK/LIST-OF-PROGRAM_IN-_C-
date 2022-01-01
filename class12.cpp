#include<iostream>
using namespace std;
class employee
{
int id;
string name;
float salary;
stu(int i,string n,float s)
{
	id =i;
	name = "n";
	salary=s;
	}
	display()
	{
		cout<<id<<" "<<salary <<" "<<name<<" "<<endl;
		
		}	
};
int main()
{
	employee e1=employee(306,"dhffgf",84);
	employee e2=employee(456,"dfjfhgh",485);
	e1.display();
	e2.display();
	return 0;
	
}

