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

    dq.push_back(1);
    dq.push_front(2);
    dq.push_front(4);
    dq.push_back(0);
    dq.push_back(7);
    dq.push_front(9);
    dq.push_back(14);

    cout<<"Deque:\n";
    print(dq);

    deque<int>::iterator it;

    it=dq.insert(dq.begin()+1,3);

    //insert() function in class deeque<>
    //returns an object of type class deque<int>::iterator to new element inserted in container

    //dq.insert(iteratorObject,val); -> iteratorObject denotes whewre to insert, val is value to be inserted

    //dq.insert(iteratorObject,size,val); -> size denotes number of val to be inserted at that memory address

    //dq.insert(iteratorObject,iteratorBegin,iteratorEnd); ->[iteratorBegin,iteratorEnd) -> [first,last) range of memory address to be inserted

    cout<<"Deque after dq.insert(dq.begin()+1,3); -> \n";
    print(dq);

    dq.insert(dq.end(),4,1);

    cout<<"Deque after dq.insert(dq.end(),4,1); -> \n";
    print(dq);

    deque<int> dq1={0,0,2,2,4,4};

    cout<<"Deque1:\n";
    print(dq1);

    dq.insert(dq.begin(),dq1.begin(),dq1.end());

    cout<<"Deque after dq.insert(dq.begin(),dq1.begin(),dq1.end()); -> \n";
    print(dq);

    vector<int> vec={4,4,4};

    cout<<"Vector:\n";
    print(vec);

    dq.insert(dq.end(),vec.begin(),vec.end());

    cout<<"Deque after dq.insert(dq.end(),vec.begin(),vec.end()); -> \n";
    print(dq);    

    return 0;
}