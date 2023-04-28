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

    dq.assign({1,2,3,4,5,7,9,11,14,16,17,19,20});  

    //deque stands for double ended queues and are just like vector
    //but unlike vector contigous memory locations may not be guranteed

    //all STL container classes are present in namespace std
    //std::vector<int> vec; same as vector<int> vec;
    //std::deque<int> dq; saem as deque<int> dq;

    cout<<"Deque \n";
    print(dq);

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

    dq.empty()?cout<<"Deque is empty\n":cout<<"Deque is not empty\n";
    //empty() function in class deque returns value of type bool lioke inspector function function to check if deque empty or not

    dq.clear();
    //clear() in class deque clears the deque
    
    dq.empty()?cout<<"Deque is empty\n":cout<<"Deque is not empty\n";

    return 0;
}