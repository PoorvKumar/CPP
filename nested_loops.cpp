#include<iostream>
using namespace std;

int main()
{

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<i<<" "<<j<<endl;
        }
    }

    int i=0, j=0;
    while(i<3)
    {
        while(j<3)
        {
            cout<<i<<" "<<j<<endl;
            j++;
        }
        j=0;
        i++;
    }

    return 0;
}