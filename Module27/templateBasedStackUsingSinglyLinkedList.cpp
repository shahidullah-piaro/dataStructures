#include<bits/stdc++.h>

using namespace std;
template<class T>
class node
{
public:
    T data;
    node * nxt;
};

template<class T>
class SinglyLinkedList
{
public:
    node<T> *head;
    int sz;
    SinglyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T> * CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        head = newnode;
    }


    //Delete at head
    void DeleteAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->nxt;
        delete a;
        head = b;
        sz--;
    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node<T> *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }
};

//Stack using singly linked list
template<class T>
class Stack{
public:
    SinglyLinkedList<T> dl;

    Stack()
    {

    }

    T top()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is empty!"<<endl;
            T a;
            return a;
        }
        return dl.head->data;
    }

    void push(T val)
    {
        dl.InsertAtHead(val);
    }

    void pop()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is empty!"<<endl;
            return;
        }
        dl.DeleteAtHead();
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
