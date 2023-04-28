#include<iostream>
using namespace std;

int main()
{
    // char s[20];
    // cin>>s;
    // cout<<s<<endl;

    char str[50];

    cin.get(str,14);//here paramenter 5 decides upperlimit of string length ,i.e , atmost 5 charcter including string delimiter '\0'
//                  upperlimit 4 states that 3 charcters only input as 4th null character 
//                  upperlimit 1 states only 1 null character in string   
    cout<<str<<endl;//prints each and every character of dtring str till it reaches null character '\0'

// no input from getline taken by program after cin.get() as enter pressed for get() input takes as enter for getline() and str2 becomes null string
// thus both getline() instead of get() solves problem by taking enter as input for s=current str and then taking input for str2
    
    cin.ignore();//another method to solve problem so enter taken by current get only
//               used after reading first string and before reading second string
//               it will ignore extra characters remaining after reading str,i.e, will clear of \n 
   
    char str2[50];
    cin.getline(str,15);
    cout<<str<<endl;

    return 0;
}
