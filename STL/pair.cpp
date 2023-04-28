#include<iostream>
#include<vector> //included class vector for object v only as class pair object through iostream library
using namespace std;

int main()
{
    pair<int,int> p={4,2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> p0={4,{7,1}};
    cout<<p0.second.second<<" "<<p0.first<<" "<<p0.second.first<<endl;

    pair<char,int> p1={'P',1};
    cout<<p1.first<<" "<<p1.second<<endl;

    vector<pair<int,int>> v;

    v.push_back(make_pair(1,4)); //make_pair() function to make pair
    v.push_back(make_pair(4,2));
    v.push_back(make_pair(2,1));
    v.push_back(make_pair(2,3));
    v.push_back(make_pair(4,9));

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    return 0;
}