#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

template<class T>
void printUset(unordered_set<T> uset)
{
    for(auto it=uset.begin(); it!=uset.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    // =(operator=()) overloaded 
    // ==(operator==()) overloaded
    // !=(operator!=()) overloaded

    unordered_set<string> uset1({"c++","code","fast","is"});
    unordered_set<string> uset2({"c++","vscode","best","data structures","algorithms"});

    cout<<"(uset1)";
    printUset(uset1);
    cout<<"(uset2)";
    printUset(uset2);

    uset1==uset2?cout<<"uset1 is equal to uset2\n":cout<<"uset1 is not equal to uset2\n"; //==(equal to) operator overloaded

    uset1!=uset2?cout<<"uset1 is not equal to uset2\n":cout<<"uset1 is equal to uset2\n"; //!=(not equal to) operator overloaded

    cout<<"uset1=uset2;\n";
    uset1=uset2; //=(operator=()) overloaded //=(assignment) operator overloaded

    uset1==uset2?cout<<"uset1 is equal to uset2\n":cout<<"uset1 is not equal to uset2\n"; //==(equal to) operator overloaded

    uset1!=uset2?cout<<"uset1 is not equal to uset2\n":cout<<"uset1 is equal to uset2\n";

    return 0;
}