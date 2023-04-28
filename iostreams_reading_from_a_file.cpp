#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile;

    infile.open("SampleInput.txt");

    //Other methods to open the file with different flags

    // ifstream infile("SampleInput.txt");
    // ifstream infile("SampleInput.txt",ios::in); //flag ios::in not necesary as object infile is of type class ifstream
    // ifstream infile("SampleInput.txt",ios::out); //opened file "SampleInput.txt" with write permission also as read permission b/c object infile of type class ifstream
    
    //flags when opening a file for writing into file or reading from file
    //ios::in(when taking input from file for opening file in read-only mode) 
    //ios::out(for opening a file with write pewrmission for writing in a file)
    //ios::trunc(for truncating(removing) contents of file when opening fdile for writing into file)
    //ios::app(fro appending new contents to original contents in file when writing in a file)

    // infile.open("abc.txt"); //for opening a file it must exist before

    if(!infile)
    {
        cout<<"File cannot be opened\n";
    }

    if(!infile.is_open())
    {
        cout<<"File cannot be opened\n";
        return 0;
    }

    string str;
    int n;

    infile>>str; //inputs first word from SampleInput.txt in object str of type class string
    infile>>n;

    int arr[n];
    int i=0;

    cout<<str<<endl;
    cout<<n<<endl;

    while(n--)
    {
        infile>>arr[i++];
    }

    cout<<"{";

    for(auto x:arr)
    {
        cout<<x<<", ";
    }
    cout<<"NULL}"<<endl;

    if(infile.eof()) //infile.eof() returns true if end of file reached of file opened through object infile of type class ifstream
    {
        cout<<"End of File Reached\n";
    }

    infile.close();

    return 0;
}