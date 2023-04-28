#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

template<class T,class R>
void printUMap(unordered_map<T,R> umap)
{
    for(auto it=umap.begin(); it!=umap.end(); it++)
    {
        cout<<it->first<<" \t"<<it->second<<endl;
    }
}

int main()
{
    unordered_map<string,int> umap;

    //=(assignment) operator overloaded, operator=()
    umap={{"one",1},{"two",2},{"four",4}};

    //[](subscript) operator overloaded, operator[]()
    umap["seven"]=7;
    umap["nine"]=9;
    umap["ten"]=10;

    cout<<"Unordered Map(umap): \n";
    printUMap(umap);

    string key;

    //find() function in cl;ass unordered_map<> ,i.e, std::unordered_map class
    //umap.find(key);
    //returns an object of type class iterator which denotes memory address of element in container if found 
    //else if key not found it denotes memory address of theoretical element after last element,i.e,
    //memory address after last element in container 

    key="four";
    if(umap.find(key)!=umap.end())
    {
        cout<<"Key:"<<key<<" Value:"<<umap.find(key)->second<<" is found in unordered map\n";
    }
    else
    {
        cout<<"Key:"<<key<<" not found\n";
    }
    
    key="five";
    if(umap.find(key)!=umap.end())
    {
        cout<<"Key:"<<key<<" Value:"<<umap.find(key)->second<<" is found in unordereed map\n";
    }
    else
    {
        cout<<"Key:"<<key<<" not found\n";
    }

    //count() in class unordered_map,i.e, std::unordered_map class returns number of elements with same key,
    //umap.count(key);
    //but only unique keys allowed so it reurns 1 or 0
    //returns 1 if element with given key present
    //returns 0 if element with given key not present

    //so can use umap.count(key); to check if an element with given key present or not

    cout<<"umap.count(\"one\"); ";
    cout<<umap.count("one")<<endl;

    cout<<"umap.count(\"three\"); ";
    cout<<umap.count("three")<<endl;

    return 0;
}