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

    dq={1,4,2,7,9,14,16,21,27};

    //deque stands for double eneded queue which is similar to vector
    //but unlikie vector contiguous memory locations may not be guranteed

    //all STL container classes are present in namespace std
    //std::deque<int> dq; is same as deque<int> dq;
    //std::vector<int> vec; is same as vector<int> vec;

    cout<<"Deque:\n";
    print(dq);

    cout<<"dq[4]-> ";
    cout<<dq[4]<<endl;

    dq[4]=42; //operator= (=)assignment operator overloaded
    // operator[] ([])subscript operator overloaded

    cout<<"after dq[4]=42; dq[4]-> ";
    cout<<dq[4]<<endl;

    cout<<"dq.at(1); ->";
    cout<<dq.at(1)<<endl;

    cout<<"dq.front(); -> ";
    cout<<dq.front()<<endl;

    cout<<"dq.back(); ->";
    cout<<dq.back()<<endl;

    return 0;
}