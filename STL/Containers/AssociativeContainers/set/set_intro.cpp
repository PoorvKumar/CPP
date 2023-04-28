#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> phi; //declared an object phi of type class set<int> //phi is empty set now 

    //class set is an associative container which impleemnts sorted data structure which can be implemented in O(logn) time complexity
    //Associative containers uses BST
    //class set implements red black tree(balance BST) implementation

    phi.insert(4);
    phi.insert(4);
    phi.insert(1); 
    phi.insert(1); 
    phi.insert(2);
    phi.insert(3);
    phi.insert(3);
    phi.insert(5);
    phi.insert(5);  

    phi.emplace(7);
    phi.emplace(9);
    phi.emplace(9);

    //only insert() and emplace() in class set

    //evcen when trying to add multiple saem values only singlew values added

    set<int>::iterator it; //class set uses red black tree (Balanced BST) implementation and searches in O(logn) time
    // int it=phi.begin(); //uncoimment and hover over phi object of type class set
    //to see it of type class Rb_tree_const_iterator 

    for(it=phi.begin(); it!=phi.end(); it++)
    {
        cout<<*it<<" "<<&it<<", ";
    }
    cout<<endl;

/*
    //Properties->
    1.Storing Order-> Stores in sorted order so can use binary_search() in class algorithm
    2.Value Charaterstics-> All elements in set are unique
    3.Values Nature-> We cannot modify a value once added although we can remove a value and add modified value
    Values are immutable in nature
    4.Search Technique-> class set follows Binary Search Tree implementation so search in O(logn)
    5.Arraning Order-> Values stored order unindexed
*/
    //to store elements in unsorted(random) order class unorder_set can be used

    //Time Complexity -> Insertion -> O(logn)
    //                -> Deletion -> O(logn)

    return 0;
}