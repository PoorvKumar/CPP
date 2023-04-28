#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

template<class T,class R>
void printUMap(unordered_map<T,R> umap)
{
    cout<<"Unordered Map: \n";
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
    umap["fourteen"]=14;

    cout<<"(umap)";
    printUMap(umap);

    //erase() function in class unordered_map ,i.e, std::unordered_map
    //umap.erase(key);
    //umap.erase(iteratorPosition); //object of type class iterator passed as parameter which deletes element at poisition denoted by iterator object
    //umap.erase(iteratorBegin,iteratorEnd); //deletes all elements in range [iteratorBegin,iteratorEnd)

    umap.erase("ten");
    cout<<"umap.erase(\"ten\"); \n(umap)";
    printUMap(umap);

    umap.erase(umap.find("two"));
    cout<<"umap.erase(umap.find(\"two\")); \n";
    printUMap(umap);

    umap.erase(umap.begin(),umap.find("one"));
    // umap.erase(umap.begin(),umap["nine"]); // subscript operator for searching and accessing key-value
    cout<<"umap.erase(umap.begin(),umap.find(\"one\")); \n";
    printUMap(umap);

    umap.empty()?cout<<"umap is empty \n":cout<<"umap is not empty \n";

    umap.clear();

    umap.empty()?cout<<"umap is empty\n":cout<<"umap is not empty\n";

    return 0;
}