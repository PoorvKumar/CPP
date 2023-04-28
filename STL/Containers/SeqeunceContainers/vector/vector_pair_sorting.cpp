#include<iostream>
#include<algorithm> //important to include algorithm library of C++ STL to use sort()
#include<vector>
using namespace std;

bool sortBySecond(pair<int,int> &a,pair<int,int> &b)
{
    return a.second<b.second;
}

int main()
{
    vector<pair<int,int>> v;

    v.push_back(make_pair(14,7));
    v.push_back(make_pair(1,4));
    v.push_back(make_pair(4,1));
    v.push_back(make_pair(4,2));
    v.push_back(make_pair(2,1));
    v.push_back(make_pair(4,9));

    cout<<"Vector of Pairs before sorting:\n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    sort(v.begin(),v.end()); //sorts v according to first element in all pair

    cout<<"Vector of Pairs after sorting(Pair First Member):\n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    //for sorting by second memeber of pair<int,int> we define our own comparator and pass it as third parameter in sort() in class algorithm

    sort(v.begin(),v.end(),sortBySecond); //only name of comparator function needed while comparing for sort()

    cout<<"Vector of Pair sorted according to second member of pair<int,int>:\n";
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<" "<<&v[i]<<endl;
    }

    // https://www.geeksforgeeks.org/sorting-vector-of-pairs-in-c-set-1-sort-by-first-and-second/

    return 0;
}