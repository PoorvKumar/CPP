#include<iostream>
using namespace std;

void display()
{
    cout<<"Hello\n";
}

int max(int x, int y)
{
    return (x>y)?x:y;
}

int min(int x, int y)
{
    return (x<y)?x:y;
}

int main()
{
    void (*fp)();// declaring pointer to function of same type as the function return datatype
    fp=display;//initialising pointer,i.e assigning function to pointer

    (*fp)();//calling funtion through pointer

    int (*fp1)(int,int);//declaring pointer of same datatype as function max ,min return value datatype
    
    fp1=max;//assigning function max to pointer fp1  

    (*fp1)(10,15);//calling function max

    fp1=min;//now pointer points function min which was initially pointing function max

    (*fp1)(10,15);//calling min function
    cout<<max(10,7);

    return 0;
}
