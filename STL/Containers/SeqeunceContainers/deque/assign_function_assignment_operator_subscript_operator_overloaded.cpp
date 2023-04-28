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

    dq.assign({1,2,3,4,5});

    cout<<"Deque \n";
    print(dq);

    vector<int> vec;

    vec={2,1,4,6,8,9,7,0};

    dq.assign(vec.begin(),vec.end());

    cout<<"Deque assigned from Vector \n";
    print(dq);

    dq={4,3,2,1,6,5,8,7}; //operator=() (=)assignment operator overloaded

    cout<<"Deque before \n";
    print(dq);

    dq[1]=7; //operator=() overloaded, (=)assignment operator overloaded
    //         operator[] overloaded ,([])subscript operator overloaded

    cout<<"Deque after dq[1]=7;  \n";
    print(dq);

    return 0;
}