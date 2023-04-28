#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile("Sample.txt");

    outfile<<"This is writing in a file using an object of type class ofstream, \nand calling parammeterised constructor of class ofstream"<<endl;
    outfile<<"ofstream outfile(Sample.txt); -> where other parameter is default parameter\n";
    outfile<<"which can be ios::trunc(default)->to truncate(remove contents from original file)\n";
    outfile<<"or ios::app (append)-> to append new data to original data of file\n";

    ofstream Outfile("Sample.txt",ios::app);
    Outfile<<"new text appended to Sample.txt by constructing another object of type class ofstream and opening Sample.txt in ios::app mode\n";
    Outfile<<"i.e, passing other parameter as ios::app when calling parameterised constructor of class ofstream which takes default parameter as ios::trunc\n";
    Outfile<<"\n\nofstream Outfile(Sample.txt,ios::app);\n";

    outfile.close(); //it is good to close (free up) resource when finished using it
    //thus, important to close file opened through object of type class ofstream

    Outfile.close();

    return 0;
}