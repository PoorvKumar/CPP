#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    
    getline(cin,str);

    int n=str.length();

    int word=1,vowel=0,conso=0;

    for(int i=0; i<n; i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')//in case of multiple spaces b/w words
        {
            word++;
        }
        else if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
        {
            if(str[i]=='A' || str[i]=='a' || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O'|| str[i]=='o'|| str[i]=='U'|| str[i]=='u')
            {
                vowel++;
            }
            else 
            {
                conso++;
            }
        }
    }

    cout<<"Words are: "<<word<<endl;
    cout<<"Vowels are: "<<vowel<<endl;
    cout<<"Consonants are: "<<conso<<endl;

    return 0;
}
