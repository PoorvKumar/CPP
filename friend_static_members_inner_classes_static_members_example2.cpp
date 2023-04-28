#include<iostream>
using namespace std;

class Student
{
public:
    int rollNo;

    static int adminNo;

    Student()
    {
        ++adminNo;
        rollNo=adminNo;

        // rollNo=++adminNo;
    }
};

int Student::adminNo=0;

int main()
{
    Student s1;
    cout<<"s1.rollNo=="<<s1.rollNo<<endl;

    Student s2;
    cout<<"s2.adminNo==s2.rollNo=="<<s2.adminNo<<endl;

    Student s3;
    cout<<s1.rollNo<<" "<<s2.rollNo<<" "<<s3.rollNo<<endl;

    return 0;
}
