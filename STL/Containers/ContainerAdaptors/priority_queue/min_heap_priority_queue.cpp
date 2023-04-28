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
        cout<<-1*pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main()
{
    //std::priority_queue class ,i.e, class priority_queue implements max heap by default 
    //but we can also implement min heap by two methods -> 
    //  -> storing all elements in object of type class priority_queue after multiplying with -1
    //  -> passing 2nd parameter as cointainer object vector<int> and 3rd parameter as greater<int> function in parameterised constructor of class priority_queue

    // Method 1
    int arr[]={4,5,7,9,3,8,14,16};
    int n=sizeof(arr)/sizeof(int);

    priority_queue<int> pq; //declared an object pq of type class priority_queue,std::priority_queue class

    for(int i=0; i<n; i++)
    {
        pq.push(-1*arr[i]);
    }

    cout<<"(pq)";
    printPQueue(pq);

    //Method 2
    priority_queue<int,vector<int>,greater<int>> pq1; //to directly store using min heap implementation
    // declared an object pq1 of type class priority_queue ,i.e std::priority_queue class

    //passed an object of type class vector as second parameter in parametersied constructor of class priority_queue
    //by calling non-parameterised constructor of class vector to declare an object of type class vector

    //passed greater<int> as third parameter which is a functional object
    //struct greater is a structure in c++ stl in namespace std,i.ew, std::greater is a struct
    //in whihc operator() (operator paranthesis) is overloaded and returns value of type bool

    pq1.push(4);
    pq1.push(5);
    pq1.push(8);
    pq1.push(1);
    pq1.push(9);

    cout<<"(pq1)Priority_Queue: \n";
    // printPQueue(pq1);
    while(!pq1.empty())
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;

    return 0;
}