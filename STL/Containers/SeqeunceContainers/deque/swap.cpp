#include<iostream>
#include<vector>
#include<deque>
using namespace std;

template<class T>
void print(T container)
{
    for(int i=0; i<container.size(); i++)
    {
        cout<<container[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    deque<int> dq;

    dq={1,4,7,9,14,16,21};

    std::deque<int> dq1;
    dq1={2,3,4,5};

    cout<<"Deque1->\n";
    print(dq);

    cout<<"Deque2->\n";
    print(dq1);

    dq.swap(dq1);

    cout<<"dq.swap(dq1);\n";
    cout<<"Deque1->\n";
    print(dq);

    cout<<"Deque2->\n";
    print(dq1);

    return 0;
}