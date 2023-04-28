#include<iostream>
// #include<priority_queue> //no hheader file for class priority_queue 
#include<queue>  // class priority_queue present in queue header file qwith class queue
using namespace std;

template<class T>
void printPQueue(priority_queue<T> pq)
{
    cout<<"Priority_Queue: \n";
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main()
{
    //std::priority_queue class ,i.e, class priority_queue implements max heap by default 

    //fucntions in class priority_queue -> push()
    //                                  -> pop()
    //                                  -> top()
    //                                  -> size()
    //                                  -> empty()
    //                                  -> emplace()
    //                                  -> swap()

    priority_queue<int> pq; //declared an object pq of type class priority_queue<int>

    pq.push(4);
    pq.push(1);
    pq.push(2);
    pq.push(7);
    pq.push(9);

    cout<<"(pq)";
    printPQueue(pq);

    cout<<"pq.top(); -> "<<pq.top()<<endl;

    pq.pop();

    cout<<"(pq)";
    printPQueue(pq);

    cout<<"pq.top(); -> "<<pq.top()<<endl;

    cout<<"pq.size(); -> "<<pq.size()<<endl;

    cout<<"pq.empty(); -> "<<pq.empty()<<endl;

    priority_queue<int> pq1;

    pq1.push(5);
    pq1.push(9);
    pq1.push(11);
    pq1.push(14);
    pq1.push(16);

    cout<<"(pq)";
    printPQueue(pq);

    cout<<"(pq1)";
    printPQueue(pq1);

    pq.swap(pq1);

    cout<<"(pq)";
    printPQueue(pq);

    cout<<"(pq1)";
    printPQueue(pq1);

    return 0;
}