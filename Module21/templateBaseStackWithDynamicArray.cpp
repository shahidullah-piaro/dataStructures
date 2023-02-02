#include<bits/stdc++.h>

using namespace std;

//Template base stack using dynamic array
template <class T>
class Stack
{
public:
    T *a;
    int stack_size;
    int array_cap;
    Stack()
    {
        a = new T[1];
        array_cap = 1;
        stack_size = 0;
    }
    //Makes the array cap multiplied by 2
    void increase_size()
    {
        T *tmp;
        tmp = new T[array_cap*2];
        for(int i=0;i<array_cap;i++)
        {
            tmp[i] = a[i];
        }
        swap(a,tmp);
        delete []tmp;
        array_cap = array_cap*2;
    }
    //Add an element in the stack O(1)
    void push(T val)
    {
        if(stack_size+1 > array_cap)
        {
            increase_size();
        }
        stack_size = stack_size + 1;
        a[stack_size-1] = val;
    }
    //Delete the topmost element from the stack
    void pop()
    {
        if(stack_size==0)
        {
            cout<<"Stack is empty!"<<endl;
            return;
        }
        stack_size = stack_size - 1;
    }
    //Return the top element from the stack
    T top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!"<<endl;
            T a;
            return a;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack<double> st;
    st.push(3.5);
    st.push(4.5);
    st.push(5.5);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;

    Stack<char> st2;
    st2.push('p');
    st2.push('r');
    st2.push('o');
    cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl;
    st2.pop();
    cout<<st2.top()<<endl;
    return 0;
}



