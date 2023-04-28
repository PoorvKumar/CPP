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

    set<int> s2(s1.begin(),s1.end()); //no comparator function passed so by default stored in ascending order

    set<int>::iterator it;

    cout<<"Set s2;\n";
    for(it=s2.begin(); it!=s2.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl; 

    cout<<"s1.size(); -> "<<s1.size()<<endl;
    cout<<"s2.size(); -> "<<s2.size()<<endl;

    return 0;
}