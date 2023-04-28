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
    //swap() function for all containers classes in c++ stl takes O(1) constant time

    unordered_set<string> uset1({"c++","code","fast","is"});
    unordered_set<string> uset2({"c++","vscode","best","data structures","algorithms"});

    cout<<"(uset1)";
    printUset(uset1);
    cout<<"(uset2)";
    printUset(uset2);

    uset1.swap(uset2);

    cout<<"(uset1)";
    printUset(uset1);
    cout<<"(uset2)";
    printUset(uset2);

    return 0;
}