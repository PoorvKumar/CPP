#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int,greater<int>> s1; //declared an object s1 of type class set for values of type int 
    //sorted using comparator greater<T>() 

    //object of type class set stores values in sorted order using BST implementation

    s1.insert(40);
    s1.insert(20);

    s1.insert(10);
    s1.insert(10); //unique values in set so only 1 10 added

    s1.insert(30);
    s1.insert(50);
    s1.insert(60);

    cout<<"Set s1:\n";
    for(auto x:s1)
    {
        cout<<x<<" ";
    }
    cout<<"\n";

    cout<<"s1.erase(30); -> "<<s1.erase(30)<<" removed"<<endl;

    // cout<<"s1.erase(s1.begin(),s1.begin()+1); -> "<<s1.erase(s1.begin(),s1.find(40))<<" removed"<<endl; //all elements before 40

    s1.erase(s1.begin(),s1.find(40));
    cout<<"Set s1:\n";
    for(auto x:s1)
    {
        cout<<x<<" ";
    }
    cout<<"\n";

    return 0;
}