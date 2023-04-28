#include<iostream>
#include<vector>
// #include<iterator>
using namespace std;

int main()
{
    vector<int> vec;
    vec={4,2,1,6,7,8,9};

    vector<int>::iterator it;

    it=vec.begin();

    while(it!=vec.end())
    {
        cout<<*it<<" ";
        advance(it,1); //advances the iterator object by 1
    }

    //advance(IteratorObbject,n);
    //advance() function in namespace std,i.e, std::advance() function advances the object of type class iterator by n units

    return 0;
}