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

    //remove all values less than or greater than a particular value
    //use find() function in class set 
    //find() function in class algorithm also so find() function overloaded for most containers in STL which can be called upon object itself
    //unlike find(beginIterator,endIterator,key) in class algorithm

    //remove all values less than 40 in s2

    cout<<"Set s2 after removing all values less than 30:\n";

    s2.erase(s2.begin(),s2.find(30));

    for(it=s2.begin(); it!=s2.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // s2.assign(s1.begin(),s1.end()); //no assign() function in class set<T>

    // //remove all values greater than 50 in s2
    // cout<<"Set after removing all values greater than equal to 50:\n";
    // s2.erase(s2.find(50),s2.end()); //no contiguous memory locations so cannot add 1 to address denoted by s2.find() which returns an object of type clas iterator
    // //so 50 also get removed

    // for(it=s2.begin(); it!=s2.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    //remove all values greater than 50 in s1
    cout<<"Set s1 after removing all values greater than 50:\n";
    s1.erase(s1.begin(),s1.find(50));

    for(it=s1.begin(); it!=s1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"s2.erase(50); -> "<<s2.erase(50)<<" removed\n"; //returns number of occurences removed
    for(auto x:s2)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"Set s1:\n";
    for(it=s1.begin(); it!=s1.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Set s2:\n";
    for(it=s2.begin(); it!=s2.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"s1.lower_bound(40); -> "<<*s1.lower_bound(40)<<endl;
    cout<<"s1.upper_bound(40); -> "<<*s1.upper_bound(40)<<endl; 

    //upper_bound() and lower_bound() fuinction work according to order in which we have sorted that it based on address of values
    //and on sorted containers //therefore *s1.upper_bound(40)==30

    //lower_bound() in class set returns object of type class iterator so we need to derefer it to know value at the address
    //upper-bound() in class set returns object of type class iterator

    cout<<"s2.lower_bound(40); -> "<<*s2.lower_bound(40)<<endl;
    cout<<"s2.upper_bound(40); -> "<<*s2.upper_bound(40)<<endl;

    s1.clear(); //clear() function called on object s1 of type class set<int> 
    s2.clear(); //which clear all elemnts in it

    // https://www.geeksforgeeks.org/set-in-cpp-stl/ 

    return 0;
}