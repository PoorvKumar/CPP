#include<iostream>
#include<stdarg.h> //class va_list ,functions va_start(), va_arg(), va_end() present in stdarg.h headerfile (library)
#include<vector>
#include<unordered_map>
using namespace std;                        



int main()
{
    unordered_map<int,vector<int>> umap;

    umap[0]=vector<int>({1,2,3,4});
    umap[1]=vector<int>({1,5,7,14});
    umap[2]=vector<int>({1,4,5,14});
    umap[3]=vector<int>({1,4,9,16});

    cout<<umap.size()<<endl;

    for(int i=0; i<umap.size(); i++)
    {
        cout<<i<<" -> ";
        for(int j=0; j<umap[i].size(); j++)
        {
            cout<<umap[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}