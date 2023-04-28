#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> phi; //declared an object phi of type class set<int> //phi is empty set now 

    //class set is an associative container which impleemnts sorted data structure which can be implemented in O(logn) time complexity
    //Associative containers uses BST
    //class set implements red black tree(balance BST) implementation //so no contiguous memory address

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

    //even when trying to add multiple same values only single value added

    set<int>::iterator it; //class set uses red black tree (Balanced BST) implementation and searches in O(logn) time
    // int it=phi.begin(); //uncoimment and hover over phi object of type class set
    //to see it of type class Rb_tree_const_iterator 

    for(it=phi.begin(); it!=phi.end(); it++)
    {
        cout<<*it<<" "<<&it<<", ";
    }
    cout<<endl;

    return 0;
}