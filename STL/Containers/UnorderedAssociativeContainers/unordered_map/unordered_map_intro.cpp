#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main()
{
    //std::unordered_map class, i.e, class unordered_map in namespace std
    //class unordered_map stores key-value pairs like a dictionary where key and value both 
    //can be of primitive type or user-defined ADT

    //class unordered_map implements hash data structure, where keys are hashed into indices of hash table
    //Time Complexity for insert,search,delete->O(1) amortized ,O(n) for worst case

    //unordered_map vs unordered_set
    //unordered_set unlike unordered_map may not necessarily contain key-value pairs
    //while unordered_set also implement hash data structure
    //find() function in class unordered_set to search for elements
    // https://www.geeksforgeeks.org/map-vs-unordered_map-c/
    
    //[](subscript) operator is overloaded in class unordered_map, operator[]() 
    //to insert value into keys which may or may not be present and for searching values of keys

    //unordered_map vs map
    //class map stores key-value pairs in sorted order (sorted according to key) using default less<>() comnparator function 
    // || our own defined comparator function
    //class map implements Balanced BST(Red Black Tree) 
    //Time Complexity for insert,search,delete-> O(logn)

    unordered_map<int,string> umap;

    umap.insert(pair<int,string>(1,"one")); //insert() function by calling parameterised constructor of class pair  
    umap.insert(pair<int,string>(2,"two")); //pair<int,string>()

    umap.insert({4,"four"}); //inserting key-value pair using {}

    umap[4]="four"; //=(assignbment) operator overloaded, operator=()
    umap[5]="five"; //[](subscript) operator overloaded, so can directly insert key-value pair ,operator[]()
    umap[7]="seven"; //can modify value of a key if present and can even add new key-value pair if not present
    umap[9]="nine";

    unordered_map<int,string>::iterator it;
    cout<<"Unordered map:\n";
    for(it=umap.begin(); it!=umap.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }

    // https://www.geeksforgeeks.org/unordered_map-in-cpp-stl/

    return 0;
}