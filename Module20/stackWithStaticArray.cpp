#include<bits/stdc++.h>

using namespace std;

//Stack using static array
const int MAX_SIZE = 500;

class Stack
{
public:
    int a[MAX_SIZE];
    int stack_size;
    Stack()
    {
        stack_size = 0;
    }
    //Add an element in the stack O(1)
    void push(int val)
    {
        if(stack_size+1 > MAX_SIZE)
        {
            cout<<"Stack is full!"<<endl;
            return;
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
        a[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }
    //Return the top element from the stack
    int top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack st;
    st.push(3);
    cout<<st.top()<<endl;
    st.push(4);
    cout<<st.top()<<endl;
    st.push(5);
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    return 0;
}
