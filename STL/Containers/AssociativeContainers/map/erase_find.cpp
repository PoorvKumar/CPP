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

    printMap(mp);

    mp.erase(4);
    cout<<"After mp.erase(4); ->"<<endl;
    printMap(mp);

    //erase() function in std::map overloaded
    //mp.erase(key)
    //mp.erase(iterator position)
    //mp.erase(iteratorBegin,iteratorEnd);

    map<string,int> mymap1;

    mymap1["one"]=1;  //other way to insert key-value pair into object of type class map,i.e, into map
    mymap1["two"]=2;
    mymap1["three"]=3;
    mymap1["four"]=4;
    mymap1["seven"]=7;
    mymap1["nine"]=9;

    // mymap1["nine"]=10; also allowed as [](subscript) operator overloaded and =(assignment) operator overloaded

    printMap(mymap1);

    mymap1.erase("three");
    cout<<"mymap1.erase(\"three\"); -> \n";
    printMap(mymap1);

    printMap(mp);

    //map.find(key); 
    //find() in class map,i.e, std::map class returns an object of type class iterator

    mp.erase(mp.find(5));
    cout<<"mp.erase(mp.find(5)); -> \n";
    printMap(mp);

    mymap1.erase(mymap1.begin(),mymap1.find("seven"));
    cout<<"mymap1.erase(mymap1.begin(),mymap1.find(\"seven\")); -> \n";
    printMap(mymap1);

    return 0;
}