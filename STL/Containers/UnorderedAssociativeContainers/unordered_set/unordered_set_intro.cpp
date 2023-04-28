#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main()
{
    //difference b/w class set and class unordered_set

    //set-> elements are stored in sorteed order || in order which we specify by passing a comparator function as 2nd parameter 
    //while declaring an object of type class set , set<int,greater<int>> set;
    //this comparator function can be predefined in class algorithm(greater<>(),less<>()) or we can define our own comparator function
    //set-> uses Balanced BST Implementation (RB Tree), 
    //Time Complexity for insert,search,delete->O(logn)

    //unordered_set->stores in unordered manner,using hash table data structure
    //for user defined ADT we can define our own hash function
    //Time Complexity for insert,search,delete->O(1) amortized , O(n) worst case

    unordered_set<string> set; //declared an object set of type class unordered_set<string>
    set.insert("code");
    set.insert("in");
    set.insert("c++");
    set.insert("is");
    set.insert("fast");
    set.insert("and");

    //emplace() can also be used other than insert() function in class unordered_set
    set.emplace("c++");
    set.emplace("is");
    set.emplace("best");

    //unordered_set stores unique values just like set, for multiple same values can use multiset(sorted,O(logn)) ,unordered_multiset(unordered,O(1))
    //stores in unordered manner with the help of hash data structure

    unordered_set<string>::iterator it;
    cout<<"Unordered_set (set): \n";
    for(it=set.begin(); it!=set.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // unordered_set<int> uset;
    unordered_set<int> uset({4,5,6,3,2,1,7}); //declared an object uset of type class unordered_set<int> 
    //by callintg the parameterised constructor of class unordered_set<> //similar to all containers before

    uset.insert(4);
    uset.insert(4);
    uset.insert(9);
    uset.insert(8);
    uset.insert(2);
    uset.insert(1);

    unordered_set<int>::iterator itr;
    cout<<"Unordered_set (uset): \n";
    for(itr=uset.begin(); itr!=uset.end(); itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;

    string key;
    key="slow";

    set.find(key)!=set.end()?cout<<key<<" found in set\n":cout<<key<<" not found in set\n";

    key="c++";
    set.find(key)!=set.end()?cout<<key<<" found in set\n":cout<<key<<" not found in set\n";

    cout<<"set.size(); -> "<<set.size()<<endl;
    cout<<"set.max_size(); -> "<<set.max_size()<<endl;

    uset.empty()?cout<<"uset is empty\n":cout<<"uset is not empty\n";

    uset.clear();

    uset.empty()?cout<<"uset is empty\n":cout<<"uset is not empty\n";

    // https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/

    return 0;
}