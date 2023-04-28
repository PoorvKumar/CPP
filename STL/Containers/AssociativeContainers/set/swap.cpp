#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1); 
    s.insert(2); 
    s.insert(3); 
    s.insert(4); 
    s.insert(5); 
    s.insert(6); 

    cout<<"Set s:\n";
    for(auto x:s)
    {
        cout<<x<<" ";
    }
    cout<<"\n";

    set<int> s2({10,20,30,20,10,40,40,50,60}); 

    set<int>::iterator it;

    cout<<"Set s2;\n";
    for(it=s2.begin(); it!=s2.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    // s1.swap(s2); //for swap() fujnction both object must be of same type
    //here s1 of type class set<int,greater<int>>
    //s2 of type class set<int,less<int>> by default in which one more default parameter passed which is allocator<int> for both

    //s1 of type class set<int,greater<int>,allocator<int>>
    //s2 of type class set<int,less<int>,allocator<int>> by deafult

    s.swap(s2);

    cout<<"After s.swap(s2); -> \n";

    cout<<"Set s:\n";
    for(auto x=s.begin(); x!=s.end(); x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    cout<<"Set s2;\n";
    for(it=s2.begin(); it!=s2.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    s=s2; //=(assignment) operator overloaded

    cout<<"Set s after s=s2; ->\n";
    for(auto x=s.begin(); x!=s.end(); x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    return 0;
}