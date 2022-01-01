#include<iostream>
using namespace std;

class employee{
	public:
		int id;
		string name;
		getdata(int i,string n)
		{
			id=i;
			name=n;
			
 		}
 		putdata()
 		{
 			cout<<id<<endl;
 			cout<<name<<endl;
		 }
};
int main()
{
	employee s1;
	employee s2;
	s1.getdata(306,"Ahsanulhak");
	s2.getdata(310,"Amrit Pratap Singh");
	s1.putdata();
	s2.putdata();
	
	
	
}
