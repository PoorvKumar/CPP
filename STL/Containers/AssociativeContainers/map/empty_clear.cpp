#include<iostream>
#include<string>
#include<map>
using namespace std;

template<class T,class R>
void printMap(map<T,R> mp)
{
    cout<<"Map :\n";
    cout<<"\tKEY\tVALUE\n";

    // map<T,R>::iterator itr; //not working //uncomment

    // for(itr=mp.begin(); itr!=mp.end(); itr++)
    // {
    //     cout<<"\t"<<itr->first<<"\t"<<itr->second<<"\n";
    // }

    for(auto itr=mp.begin(); itr!=mp.end(); itr++) //works perfectly
    {
        cout<<"\t"<<itr->first<<"\t"<<itr->second<<"\n";
    }

    // for(auto x:mp) //works perfectly
    // {
    //     cout<<"\t"<<x.first<<"\t"<<x.second<<"\n";
    // }
}

int main()
{
    map<int,int> mp;

    mp.insert(pair<int,int>(1,40)); //insert() function in class map,i.e, std::map class to insert key-value in object of type class map,i.e,std::map<T,R>
    mp.insert(pair<int,int>(4,23));
    mp.insert(pair<int,int>(2,34));
    mp.insert(pair<int,int>(3,21));

    mp.insert({5,25}); ///can also directly insert pair in {} using insert() function
    mp.insert({6,36});

    mp[7]=21; //can  also insert using operator[] 
    //(subscript)operator[] overloaded //(assignment)operator= overloaded
    //operator[]() overloaded  //operator=() overloaded

    mp.emplace(pair<int,int>(7,21)); //can also use empalce() function to insert into map

    printMap(mp);

    cout<<"mp.empty(); -> "<<mp.empty()<<endl;

    mp.clear();

    cout<<"After mp.clear(); ->\n";

    cout<<"mp.empty(); -> "<<mp.empty()<<endl;

    return 0;
}