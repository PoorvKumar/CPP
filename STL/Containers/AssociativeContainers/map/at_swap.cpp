#include<iostream>
#include<string>
#include<map>
using namespace std;

template<class T,class R>
void printMap(map<T,R> mp)
{
    cout<<"Map :\n";
    cout<<"\tKEY\tVALUE\n";

    for(auto itr=mp.begin(); itr!=mp.end(); itr++) //works perfectly
    {
        cout<<"\t"<<itr->first<<"\t"<<itr->second<<"\n";
    }
}

int main()
{
    map<string,string> mp;

    mp={{"IM","TS"},{"CA","SR"},{"T","T"},
    {"BW","NR"},{"HE","CB"},{"H","BB"}};

    cout<<"Map:\n";
    cout<<"\tAvenger\tFull_Name\n";
    for(auto x:mp)
    {
        cout<<"\t"<<x.first<<"\t"<<x.second<<endl;
    }

    cout<<"mp.at(\"IM\"); -> ";
    cout<<mp.at("IM")<<endl;

    map<int,int> map1={{1,4},{2,5},{3,6}};

    cout<<"1.";
    printMap(map1);

    map<int,int> map2;
    map2={{2,6},{3,7},{4,8}};

    cout<<"2.";
    printMap(map2);

    cout<<"map1.at(1); -> "<<map1.at(1)<<endl;

    map1.swap(map2);

    cout<<"map1.swap(map2); \n";

    cout<<"1.";
    printMap(map1);
    cout<<"2.";
    printMap(map2);

    // https://www.geeksforgeeks.org/mapat-mapswap-c-stl/

    return 0;
}