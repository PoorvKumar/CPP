#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

template<class T,class R>
void printUMap(unordered_map<T,R> umap)
{
    for(auto it=umap.begin(); it!=umap.end(); it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}

int main()
{
    unordered_map<string,int> umap;

    //=(assignment) operator overloaded, operator=()
    umap={{"one",1},{"two",2},{"four",4},{"five",5},{"seven",7},{"nine",9}};

    //[](subscript) operator overloaded, operator[]()
    umap["ten"]=10;
    umap["fourteen"]=14;
    umap["sixteen"]=16;

    cout<<"Unordered Map(umap): \n";
    printUMap(umap);

    cout<<"umap.size(); -> ";
    cout<<umap.size()<<endl;

    cout<<"umap.max_size(); -> ";
    cout<<umap.max_size()<<endl;

    return 0;
}