#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

template<class T>
void printUset(unordered_set<T> uset)
{
    for(auto it=uset.begin(); it!=uset.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    unordered_set<string> set; //declared an object set of type class unordered_set<string>
    set.insert("code");
    set.insert("in");
    set.insert("c++");
    set.insert("is");
    set.insert("fast");
    set.insert("and");
    set.insert("c++");
    set.insert("is");
    set.insert("the");
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

    set.erase("in");
    cout<<"set.erase(\"in\"); -> \n(set)";
    printUset(set);

    uset.erase(uset.begin());
    cout<<"uset.erase(uset.begin()); -> \n(uset)";
    printUset(uset);

    // uset.erase(uset.begin()+1,uset.begin()+3); //notin contiguous memory location so cannot do +1 +3 , use find
    uset.erase(uset.begin(),uset.find(4));
    cout<<"uset.erase(uset.begin(),uset.find(4)); -> \n(uset)";
    printUset(uset);

    uset.empty()?cout<<"uset is empty\n":cout<<"uset is not empty\n";

    uset.clear();

    uset.empty()?cout<<"uset is empty\n":cout<<"uset is not empty\n";

    return 0;
}