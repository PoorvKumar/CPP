#include <iostream>
using namespace std;

typedef int marks;
typedef int rollno;


int main()
{
	marks m1,m2,m3;
	rollno r1,r2,r3;
	cout<<"Enter marks \n";
	
	cin>>m1>>m2>>m3;
	int tot=m1+m2+m3;
	cout<<tot;
	
	system("pasue>0");
}