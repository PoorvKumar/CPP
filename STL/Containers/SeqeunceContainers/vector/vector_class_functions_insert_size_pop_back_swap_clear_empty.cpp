#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v(2,100); //v={100,100}

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.insert(v.begin(),400); //v={400,100,100} //400 inserted at v.begin()

    v.insert(v.begin()+2,2,400); //v={400,100,400,400,100} //first parameter is memory address where to insert in object v of type class vector
    //  400,400 inserted at v.begin()+2 ,i.e, v[3] and v[4]
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v={400,100,1400};

    vector<int> v1={42,21,7};

    v.insert(v.end(),v1.begin(),v1.begin()); //v={400,100,1400,42,21,7}
    //   v1 inserted at v.end(),i.e,end of v
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v={10,20,30,40,50};

    cout<<v.size()<<endl;

    v.pop_back(); //v={10,20,30}

    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    vector<int> v2;
    v1={1,2,3,4};
    v2={4,2,1};

    cout<<"v1->";  // v1->1 2 3 4
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"v2->"; //v2->4 2 1
    for(auto x:v2)
    {
        cout<<x<<" ";
    }
    cout<<endl<<endl;

    v1.swap(v2); //swap() function called over object v1 of type class vector with parameter object v2 of type class vector

    cout<<"v1->"; // v1->4 2 1
    for(auto x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"v2->"; // v2->1 2 3 4
    for(auto x:v2)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<v.empty()<<endl;

    v.clear(); //clears entire vector,i.e, object v of type class vector

    cout<<v.empty(); //return true if object v of type class vector empty

    // https://www.geeksforgeeks.org/vector-insert-function-in-c-stl/

    return 0;
}