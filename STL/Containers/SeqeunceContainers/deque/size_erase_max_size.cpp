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

    dq.assign({1,2,3,4,5,7,9,11,14,16,21,17,19,20});  

    //deque stands for double ended queues and are just like vector
    //but unlike vector contigous memory locations may not be guranteed

    cout<<"Deque \n";
    print(dq);

    cout<<"dq.size() -> ";
    cout<<dq.size()<<endl;

    //size() function in class deque returns size of deque value of type int

    dq.erase(dq.begin()+2);

    //all STL: container classes arew presenet in namespace std so deque<int> dq; is equivalent to std::deque<int> dq;
    //erase() function in class deque in namespace std

    //dq.erase(iteratorObject); //iteratorObject is an object of type class deque<int>::iterator

    //dq.erase(iteratorBegin,iteratorEnd); //erases all elements by object of type class deque<int>::iterator
    // in container in range of [beginIterator,endIterator) ->  [first,last)

    cout<<"Deque after dq.erase(dq.begin()+2); -> \n";
    print(dq);

    dq.erase(dq.end()-3,dq.end());

    cout<<"Deque after dq.erase(dq.end()-3,dq.end()); ->\n";
    print(dq);

    cout<<"dq.max_size(); -> ";
    cout<<dq.max_size()<<endl;

    //max_size() in class deque in namespace std returns maximum possibl size of deque 

    return 0;
}