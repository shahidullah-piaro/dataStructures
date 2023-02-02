#include<bits/stdc++.h>

using namespace std;
template<class T>
class node
{
public:
    T data;
    node * nxt;
    node * prv;
};

template<class T>
class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
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
        newnode->prv = NULL;
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
        a->prv = newnode;
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
        if(b!=NULL)
        {
            b->prv = NULL;
        }
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

//Stack using doubly linked list
template<class T>
class Stack{
public:
    DoublyLinkedList<T> dl;

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

    int siZe()
    {
        dl.getSize();
    }
};

int main()
{
    Stack<int>a;
    a.push(5);
    a.push(2);
    a.push(7);
    a.push(8);
    a.push(3);
    Stack<int>tmp;
    while(a.siZe()>0)
    {
        int t = a.top();
        a.pop();
        while(tmp.siZe()>0)
        {
            if(tmp.top()<t)
            {
                break;
            }
            a.push(tmp.top());
            tmp.pop();
        }
        tmp.push(t);
    }
    swap(a,tmp);
    while(a.siZe()>0)
    {
        cout<<a.top()<<" ";
        a.pop();
    }
    return 0;
}



