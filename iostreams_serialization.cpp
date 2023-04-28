#include<iostream>
#include<fstream>
using namespace std;

class Student
{
public:
    string name;
    int rollno;
    string branch;

    friend ifstream& operator>>(ifstream& ifs,Student& s);
    friend ofstream& operator<<(ofstream& ofs,Student& s);
};

ifstream& operator>>(ifstream& ifs,Student& s) //extraction(>>) operator overloaded
{
    ifs>>s.name>>s.rollno>>s.branch;
    return ifs;
}

ofstream& operator<<(ofstream& ofs,Student& s) //insertion(<<) operator overloaded
{
    ofs<<s.name<<endl;
    ofs<<s.rollno<<endl;
    ofs<<s.branch<<endl;
    return ofs;
}

int main()
{
    Student s; //Serialization is the process of storing and retrieving state of an object of type class className
    Student s1;

    ifstream ifs("iostreams_StudentInput.txt");

    ifs>>s;
    ifs>>s1;
    ifs.close();

    ofstream ofs("iostreams_StudentOutput.txt",ios::trunc);

    ofs<<s;
    ofs<<s1;
    ofs.close();

    // ifs.open("StudentOutput.exe");
    ifstream infile("iostreams_StudentOutput.txt"); //works when new object of type class ifstream 
    //as object ifs of type class ifstream closed file before

    while(!infile.eof())
    {
        string n;
        int rn;
        string br;

        infile>>n>>rn>>br;
        cout<<"*********StudentDetails*********\n";
        cout<<"Name: "<<n<<endl<<"Roll No: "<<rn<<endl<<"Branch: "<<br<<endl; //some error when reaching end of file
        //as loop still executiong even when reached end of file as 1 extra student information in cout(stdout)
        //thus end of file not reached after 2nd student details
        cout<<"********************************\n";
    }

    // string n;
    // int rn;
    // string br;

    // infile>>n>>rn>>br;
    // cout<<"Name: "<<n<<endl<<"Roll No: "<<rn<<endl<<"Branch: "<<br<<endl; 

    infile.close();

    return 0;
}