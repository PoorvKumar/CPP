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
    map<int,int> map1={{1,40},{2,50},{3,60},{4,70}};

    printMap(map1);

    map<int,int>::iterator it;

    it=map1.lower_bound(2);
    cout<<"map1.lower_bound(2); -> "<<it->first<<" "<<it->second<<endl;

    it=map1.upper_bound(2);
    cout<<"map1.upper_bound(2); -> "<<it->first<<" "<<it->second<<endl;
    
    it=map1.lower_bound(3);
    cout<<"map1.lower_bound(3); -> "<<it->first<<" "<<it->second<<endl;

    it=map1.upper_bound(3);
    cout<<"map1.upper_bound(3); -> "<<it->first<<" "<<it->second<<endl;

    return 0;
}