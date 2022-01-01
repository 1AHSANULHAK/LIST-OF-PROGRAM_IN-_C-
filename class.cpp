#include<iostream>
using namespace std;
class shop{
	public:
	int id;
	string shopname;
	float maxcost;
	
};
int main()
{
	shop x;
	x.id=1245;
	x.shopname="ONLINE SERVICE CENTER";
	x.maxcost=2000000;
	cout<<"Rasistration number of shop "<<x.id<<endl;
	cout<<"Shop Name is "<<x.shopname<<endl;
	cout<<"Total cost estimate by Shop "<<x.maxcost<<endl;
	return 0;
	
	
}
