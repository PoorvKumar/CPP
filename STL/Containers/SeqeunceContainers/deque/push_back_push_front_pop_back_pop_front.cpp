#include<iostream>
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

    dq.push_back(1);  //1

    dq.push_front(2); //2 1

    dq.push_front(4); //4 2 1

    dq.push_back(0);  //4 2 1 0

    dq.push_front(3); //3 4 2 1 0

    dq.push_back(7);  //3 4 2 1 0 7

    dq.push_front(9); //9 3 4 2 1 0 7

    dq.push_back(14); //9 3 4 2 1 0 7 14

    dq.push_front(6); //6 9 3 4 2 1 0 7 14

    dq.push_back(5);  //6 9 3 4 2 1 0 7 14 5

    print(dq);

    dq.pop_back();    //6 9 3 4 2 1 0 7 14

    print(dq);

    dq.pop_front();   //9 3 4 2 1 0 7 14

    print(dq);

    return 0;
}