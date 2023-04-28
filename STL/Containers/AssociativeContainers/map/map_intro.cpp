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
    // mp.emplace({9,63}); //not work when pair in {} using emplace() 

    cout<<"Map mp:\n"<<"\tKey\tValue\n"; //\t gives one tab space
    // cout<<"Map mp:\n"<<"    Key    Value\n"; //instead giving 4 whitespaces
    map<int,int>::iterator it;

    for(it=mp.begin(); it!=mp.end(); it++)
    {
        cout<<"\t"<<it->first<<"\t"<<it->second<<"\n";
        // cout<<"    "<<it->first<<"    "<<it->second<<"\n";
    }

    map<int,string> mymap;
    mymap.insert(pair<int,string>(1,"one"));
    mymap.insert(pair<int,string>(2,"two"));
    mymap.insert(pair<int,string>(4,"four"));

    mymap.insert({7,"seven"});

    mymap[9]="nine";

    printMap(mymap);

    map<string,int> mymap1;

    mymap1["one"]=1;  //other way to insert key-value pair into object of type class map,i.e, into map
    mymap1["two"]=2;
    mymap1["three"]=3;
    mymap1["four"]=4;
    mymap1["seven"]=7;
    mymap1["nine"]=9;

    // mymap1["nine"]=10; also allowed as [](subscript) operator overloaded and =(assignment) operator overloaded

    printMap(mymap1);
    cout<<"std::map stores in sorted order which is by default(<),thus,four<nine<one<seven<three<two\nf<n<o<s<th<tw\n";
    cout<<"std::map class uses Balanced BST for Implementation \nTime Complexity: Insertion->O(logn)\nTime Complexity: Search->O(logn)\nTime Complexity: Deletion->O(logn)\n";

    map<char,int> mp1={{'C',67},{'A',65},{'B',66},{'a',97},{'b',98},{'e',101}};
    printMap(mp1);

    // https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/

    return 0;
}