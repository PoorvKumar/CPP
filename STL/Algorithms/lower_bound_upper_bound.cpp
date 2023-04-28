#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<class T>
void print(T arr,int n) //T can be int* as well as vector<int>
{
    // int n=sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={3,4,10,21,23,45,64,100,14,20,};
    int n=sizeof(arr)/sizeof(int);

    // vector<int> vec(arr,arr+n);
    vector<int> vec;
    vec.assign(arr,arr+n);

    sort(arr,arr+n); //lower_bound(), upper_bound() function(s) work on sorted array
    sort(vec.begin(),vec.end()); //vector / array muyst be sorted for lower_bound() and upper_bound() to work

    cout<<"Vector/Array:\n";
    print(vec.begin(),vec.size());

    int k;
    k=14;
    // k=2; //2 not in range of [vec.begin(),vec.end())
    // k=3;
    // k=100;

    int* p;
    vector<int>::iterator it;

    //lower_bound() in class algorithm //all functions inh class algorithm in namespace std thus std::lower_bound()
    //upper_bound() in class algorithm  //std::upper_bound()

    p=lower_bound(arr,arr+n,k);
    it=lower_bound(vec.begin(),vec.end(),k);
    cout<<"lower_bound() (in range of entire vector/array) of k="<<k<<" is:\n";
    cout<<*p<<" "<<p<<" "<<*it<<" "<<&it<<endl;

    //lower_bound() returns iterator to the first element in vector(container)/pointer to array index 
    //which is not less than k(can be equal to), thus k if present else least value greater than k 
    //in range [first,last)

    p=upper_bound(arr,arr+n,k);
    it=upper_bound(vec.begin(),vec.end(),k);
    cout<<"upper_bound() (in range of entire vector/array) of k="<<k<<" is:\n";
    cout<<*p<<" "<<p<<" "<<*it<<" "<<&it<<endl;

    //upper_bound() returns iterator to the first element in vector(container)/pointer to array index 
    //which is greater than k , thus upper_bound() for greatest value->*max_element() is vec.end() outside container(vector)/array
    //in range [first,last)

    //lower_bound() for element less than least element is vec.rend() ,i.e, theoretical element before first element in sorted vector/array
    //lower_bound() for least element is vec.begin() ,i.e, first element in sorted vector/array
    //upper_bound() for maximum element is vec.end() ,i.e, theoretical element after last element in srted vector/array

    return 0;
}