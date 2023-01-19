#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }
    //Inserts a node with given data at head
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head==NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }
    //Inserts the given data at the given index
    //Time Complexity : O(n)
    void InsertAtGivenIndex(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }
    //Delete the given index
    //Time Complexity : O(n)
    void DeleteAnyNode(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" index doesn't exist."<<endl;
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!=NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index==0)
        {
            head = c;
        }
        sz--;
    }

    //Print the linked list
    //Time Complexity : O(n)
    void Traverse()
    {
        node *a = head;
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<endl;
    }
    //Reverse print the linked list
    //Time Complexity : O(n)
    void Reverse()
    {
        node *a = head;
        int cur_index = 0;
        while(cur_index!=sz-1)
        {
            a = a->nxt;
            cur_index++;
        }
        //Last index is in *a(last index)
        node *b = head;
        while(b!=NULL)
        {
            swap(b->nxt,b->prv);
            b = b->prv;
        }
        head = a;
    }
    //Returns the size of linked list
    //Time Complexity : O(1)
    int getSize()
    {
        return sz;
    }

};

int main()
{
    DoublyLinkedList D;
    D.InsertAtHead(10);
    D.InsertAtHead(20);
    D.InsertAtHead(30);
    D.InsertAtHead(40);
    D.Traverse();
    cout<<D.getSize()<<endl;
    D.InsertAtGivenIndex(2, 15);
    D.Traverse();
    cout<<D.getSize()<<endl;
    D.DeleteAnyNode(2);
    D.Traverse();
    cout<<D.getSize()<<endl;
    D.Reverse();
    D.Traverse();

    return 0;
}
