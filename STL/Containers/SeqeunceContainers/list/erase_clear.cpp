#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
    list<int> ls({5,3,1,4,6,8,7,5,3,2,6,7,8});

    ls.sort();
    for(auto x:ls)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    //erase(position) 
    //erase(beginIterator,endIterator)

    cout<<"ls.erase(ls.begin()+3); \n";
    ls.erase(ls.begin()); 
    //can also pass find(iteratorBegin,iteratorEnd,key) in class algorithm,std::algorithm class

    for(auto x:ls)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"ls.erase(find(ls.begin(),ls.end(),3),find(ls.begin(),ls.end(),5)); \n";
    ls.erase(find(ls.begin(),ls.end(),3),find(ls.begin(),ls.end(),5)); 
    //can also pass ls.find(key)

    for(auto x:ls)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}