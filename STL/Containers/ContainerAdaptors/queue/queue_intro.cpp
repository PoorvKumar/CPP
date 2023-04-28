#include<iostream>
#include<queue>
using namespace std;

template<class T>
void printQueue(queue<T> queue)
{
    cout<<"Queue: \n";
    while(!queue.empty())
    {
        cout<<queue.front()<<" ";
        queue.pop();
        // cout<<queue.pop()<<" "; //pop() does not return any value
    }
    cout<<endl;
}

int main()
{
    // std::queu class , i.e , class queue in namespace std
    // uses an encapsulated object of type class deque or class list for internal implementation

    queue<int> queue;

    queue.push(4);
    queue.push(1);
    queue.push(2);
    queue.push(6);
    queue.push(7); // {4,1,2,6,7}

    printQueue(queue);

    cout<<"queue.front(); -> "<<queue.front()<<endl;
    cout<<"queue.back(); -> "<<queue.back()<<endl;

    cout<<"queue.size(); -> "<<queue.size()<<endl;

    queue.pop();

    printQueue(queue);

    cout<<"queue.front(); -> "<<queue.front()<<endl;
    cout<<"queue.back(); -> "<<queue.back()<<endl;

    cout<<"queue.size(); -> "<<queue.size()<<endl;

    cout<<"queue.empty(); -> ";
    cout<<queue.empty()<<endl;

    std::queue<int> queue1; // all c++ stl classes including container classes in namespace std
    //b/c declared an object queue of type class queue<int> so getting naming error without std::queue
    //to specify class queue

    queue1.push(2);
    queue1.push(3);
    queue1.push(5);
    queue1.push(8);
    queue1.push(9);
    queue1.push(0);

    cout<<"(queue)";
    printQueue(queue);

    cout<<"(queue1)";
    printQueue(queue1);

    queue.swap(queue1);

    cout<<"(queue)";
    printQueue(queue);

    cout<<"(queue1)";
    printQueue(queue1);

    // queue<int>::iterator it; //doesn't work

    // for(it=queue.begin(); it!=queue.end(); it++)
    // {
    //     cout<<*it<<" "<<&it<<" ";
    // }

    // queue<int>  queue1({4,3,2,1,6,7,8}); //cannot assign queue 

    return 0;
}