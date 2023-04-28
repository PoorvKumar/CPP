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

bool compareString(string &s1,string &s2) //defined our own comparator
{
    // return s1.compare(s2)<0; //for sorting in ascending order
    return s1.compare(s2)>0; //for sorting in descending order
}

int main()
{
    cout<<"Array before Sorting:\n";
    int arr[]={4,1,2,6,8,0,3,9,7};
    print(arr,9);

    sort(arr,arr+9); //sort() function in class algorithm 
    //takes parameters as sort(beginAddress,endAddress); //where beginAddress is the location where container starts
    // endAddress is the next contigous location after the container ends
    //thus we can specify the range of container which we want to sort -> sort(arr+2,arr+9);
    // memory address range where sort works -> [beginAddress,endAddress) 

    //sort() function uses combination of quickSort(),heapSort(),insertionSort()
    //By default it uses quickSort(),but if quickSort() is doing unfair partioning and taking time more than nlog(n)
    //then it switches to heapSort() and when array size becomes small it switches to insertionSort()

    //sort() function for sorting in a particular order takes a comparator function as third parameter which returns value of type bool 
    //for sorting in descending order greater<T>() function passed as third parameter whihc returns true if value being compared is greater
    //sort(beginAddress,endAddress,comparator())

    //we can define our own comparator function(s) like
    /*
    bool compareVal(Node* head1,Node* head2)
    {
        return head1->val>head2->val; //comparator() fucntion for sorting linked list in descending order
    }
    */   

    cout<<"Array after Sorting:\n";
    print(arr,9);

    cout<<"Array after Sorting in descending order:\n";
    sort(arr,arr+9,greater<int>()); //greater() function in class algorithm for values of type int to sort in descending order
    print(arr,9);

    cout<<"Array after Sorting in range from 2 index to 2nd last index in ascending order:\n";
    // sort(arr+2,arr+9-1); //sort() for a range of an array/container
    sort(arr+2,arr+9-1); //sort() for a range of an array/container
    print(arr,9);

    cout<<"Array after Sorting in range from 0 index to 4th last index in descending order:\n";
    sort(arr,arr+9-3,greater<int>()); //sort() for a range of an array/container
    print(arr,9); //arr+9-3 is memory location after 4th last element in array

    cout<<"Vector before Sorting:\n";
    vector<int> vec={3,5,7,9,2,1,4,0,14,16};
    print(vec,vec.size());

    sort(vec.begin(),vec.end());

    cout<<"Vector after Sorting:\n";
    print(vec,vec.size());
    print(vec.begin(),vec.size());
    //vec.begin() and vec points to(stores) same memory address in heap

    cout<<"Vector after Sorting in descending order:\n";
    sort(vec.begin(),vec.end(),greater<int>()); //cannot use vec instead of vec.begin()
    print(vec,vec.size());

    cout<<"Vector after Sorting in range from 2 index to 2nd last index in ascending order:\n";
    sort(vec.begin()+2,vec.end()-1); //sort() for a range of an array/container
    print(vec,vec.size()); //pointer arithemetic

    cout<<"Vector after Sorting in range from 0 index to 4th last index in descending order:\n";
    sort(vec.begin(),vec.end()-2,greater<int>()); //sort() for a range of an array/container
    print(vec.begin(),vec.size()); //1 being there is a coinincidence

    //here vec.end() denotes next contigous memory address/location after last element 
    //so to sort() in range need to make sure to include correct address -> [beginAddres,endAddress)

    cout<<"For sorting in a particular order we can define our own comparators -> https://www.geeksforgeeks.org/sort-c-stl/\n";

    vector<string> vecString;
    vecString.assign({"Avenger","Ultron","IronMan","TonyStark","IronLegion","Galaxy","Space"});

    cout<<"Vector before sorting:\n";
    print(vecString.begin(),vecString.size());

    sort(vecString.begin(),vecString.end(),compareString);

    cout<<"Vector after sorting:\n";
    print(vecString,vecString.size());

    return 0;
}