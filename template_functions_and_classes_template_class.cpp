#include<iostream>
using namespace std;

template<class T>
class Stack
{
private:
    T* stack;
    int top=-1;
    int size;
public:
    Stack(int size=100) //Parameterised Constructor with default arguments also works as Non-Parameterised Constructor
    {
        stack=new T[size];
        this->size=size;
    }

    void push(T val);
    T pop();
    T peek();
    bool empty()
    {
        return size!=0;
    }
};

template<class T> //must define class T as template for each individual function and class when separate definition  
void Stack<T>::push(T val) //class Stack<T> is defined above not class Stack 
{
    stack[++top]=val; //class Stack<T> used whenever declaring(constructing) an object of type class Stack<T> or elsewhere
}

// template<typename T>
template<class T> //defined classs T as template //we can also use typename T instead of class T both have same meaning
T Stack<T>::pop()
{
    return stack[top--];
}

template<class T>
T Stack<T>::peek()
{
    return stack[top];
}

int main() 
{
    Stack<int> s(10);
    s.push(4);
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.pop()<<endl;

    s.push(0);
    cout<<s.pop()<<" "<<s.peek()<<endl;

    cout<<s.empty()<<endl;

    Stack<char> s1(11);
    s1.push('P');
    s1.push('O');
    s1.push('O');
    s1.push('R');
    s1.push('V');

    cout<<s1.empty();

    return 0;
}
