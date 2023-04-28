#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> ls({5,3,1,4,6,8,7,5,3,2,6,7,8});

    ls.sort();
    for(auto x:ls)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"ls.front(); \n";
    cout<<ls.front()<<endl;

    cout<<"ls.back(); \n";
    cout<<ls.back()<<endl;

    cout<<"ls.remove(6); \n";
    ls.remove(6); //remove() function removes all occurencecs of given key 
    //from object of type class list which uses double linked list for implementation

    for(auto x:ls)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}