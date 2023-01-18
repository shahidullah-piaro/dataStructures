#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node * nxt;
};

class LinkedList
{
public:
    node * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with data = value and next = NULL
    node * CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    //Insert new value at Head
    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        //If head is NULL
        if(head == NULL)
        {
            head = a;
            return;
        }
        //If head is not NULL
        a->nxt = head;
        head = a;
    }
    //Prints the linked list
    void Traverse()
    {
        node* a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }
    //Search for a single value
    int SearchDistinctValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!= NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }
    //Search all possible occurrence
    void SearchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!= NULL)
        {
            if(a->data==value)
            {
                cout<<value<<" is found at index "<<index<<endl;
            }
            a = a->nxt;
            index++;
        }
    }
    //Get linked list size O(n)
    int getSizeOrderN()
    {
        int sz = 0;
        node *a = head;
        while(a!=NULL)
        {
            sz++;
            a = a->nxt;
        }
        return sz;
    }
    //Get linked list size O(1)
    int getSizeOrderOne()
    {
        return sz;
    }
    //Insert at any index
    void InsertAtAnyIndex(int index, int value)
    {
        if(index<0 || index>sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node *a = head;
        int cur_index = 0;
        while(cur_index!=index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
    //Delete node from head
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->nxt;
        delete a;
    }
    //Delete from any index
    void DeleteAnyIndex(int index)
    {
        if(index < 0 || index > sz-1)
        {
            return;
        }
        if(index==0)
        {
            DeleteAtHead();
            return;
        }
        sz--;
        node *a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }

};

int main()
{
    LinkedList l;
    cout<<l.getSizeOrderOne()<<endl;
    l.InsertAtHead(10);
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    l.InsertAtHead(40);
    l.Traverse();
    cout<<l.getSizeOrderOne()<<endl;
    l.InsertAtAnyIndex(1,100);
    l.Traverse();
    cout<<l.getSizeOrderOne()<<endl;
    l.InsertAtAnyIndex(5,200);
    l.Traverse();
    cout<<l.getSizeOrderOne()<<endl;

    l.DeleteAtHead();
    l.Traverse();
    cout<<l.getSizeOrderOne()<<endl;

    l.DeleteAnyIndex(2);
    l.Traverse();
    cout<<l.getSizeOrderOne()<<endl;

    return 0;
}
