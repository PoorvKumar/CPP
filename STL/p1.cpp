#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

template<class T>
void print(T arr,int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int n;
    n=14;

    int arr[n]; //decalred an array arr of size n of values of type int

    //fill() function in class algorithm which fills the passed range [beginAddress,endAddress) with value passed as parameter
    //fill(beginAddress,endAddress,val); //fill() in range in [beginAddress,endAddress)
    //fill(beginIterator,endIterator,val); //fill() inj range [beginIterator,endIterator)

    fill(arr,arr+n,0);
    cout<<"Array -> \n";
    print(arr,n);

    vector<int> v(16); //declared an object v of type class vector by calling parameterized constructor of class vector 
    //with parameter as intial size of vector 

    fill(v.begin(),v.end(),-1);
    cout<<"Vector -> \n";
    print(v.begin(),v.size());
    print(v,v.size());

    return 0;
}