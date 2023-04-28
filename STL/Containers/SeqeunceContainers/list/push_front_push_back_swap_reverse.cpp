#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> ls;
    ls={1,2,4}; //=(assignment) operator overloaded, operator=() overloaded 
    //assign() function in class list,std::list class present

    ls.push_back(5); //{ 1 , 2 , 4 , 5 }

    ls.pop_back();  //{ 1 , 2 , 4 }

    ls.pop_front(); //{ 2 , 4 }

    ls.push_back(6); //{ 2, 4 , 6 }

    ls.push_front(0); // { 0 , 2 , 4 , 6 }

    for(auto x:ls)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    list<int> ls1({5,3,1,4,6,8,7,5,3,2,6,7,8});
    ls.swap(ls1);

    for(auto x:ls)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"ls.reverse(); \n";

    ls.reverse();
    for(auto x:ls)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"ls.sort(); \n";

    ls.sort();
    for(list<int>::iterator it=ls.begin(); it!=ls.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // https://www.geeksforgeeks.org/list-cpp-stl/

    return 0;
}