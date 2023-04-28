#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main()
{
    //set-> elements are stored in sorteed order
    //set-> uses Balanced BST Implementation (RB Tree), 
    //Time Complexity for insert,search,delete->O(logn)

    //unordered_set->stores in unordered manner,using hash table data structure
    //Time Complexity for insert,search,delete->O(1) amortized , O(n) worst case

    unordered_set<string> set; //declared an object set of type class unordered_set<string>
    set.insert("code");
    set.insert("in");
    set.insert("c++");
    set.insert("is");
    set.insert("fast");
    set.insert("and");
    set.insert("c++");
    set.insert("is");
    set.insert("best");

    //unordered_set stores unique values just like set, for multiple same values can use multiset(sorted,O(logn)) ,unordered_multiset(unordered,O(1))
    //stores in unordered manner with the help of hash data structure

    unordered_set<string>::iterator it;
    cout<<"Unordered_set (set): \n";
    for(it=set.begin(); it!=set.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // find() function in class unordered_set returns an object of type class iterator

    string key;
    key="slow";

    set.find(key)!=set.end()?cout<<key<<" found in set\n":cout<<key<<" not found in set\n";

    key="c++";
    set.find(key)!=set.end()?cout<<key<<" found in set\n":cout<<key<<" not found in set\n";

    return 0;
}