#include<iostream>
using namespace std;

template<class T>
T maxim(T a,T b) //cannot use function name as max due to std::max function already present in iostream library
{
    return a>b?a:b;
}

int main()
{
    cout<<maxim(10,5)<<endl; 
    cout<<maxim(10.5,2.3)<<endl;//no need to specify f for float as can take double also which it is by default
    cout<<maxim(2.3f,2.42f)<<endl;

    return 0;
}
