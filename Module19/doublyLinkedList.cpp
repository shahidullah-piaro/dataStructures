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
    //Delete all 0 nodes from linked list
    void deleteZero()
    {
        node *a = head;
        while(a!=NULL)
        {
            if(a->data==0)
            {
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
                if(b==NULL)
                {
                    head = c;
                }
                sz--;
            }
            a = a->nxt;
        }
    }
    //swap node values
    void swapNode(int i, int j)
    {
        node* pos1 = head;
        node* pos2 = head;
        for(int k = 0; k < i; k++)
        {
            pos1 = pos1->nxt;
        }
        for(int k = 0; k < j; k++)
        {
            pos2 = pos2->nxt;
        }

        int val = pos1->data;
        pos1->data = pos2->data;
        pos2->data = val;
    }

};

int main()
{
    DoublyLinkedList D;
    D.InsertAtHead(3);
    D.InsertAtHead(2);
    D.InsertAtHead(6);
    D.InsertAtHead(4);
    D.InsertAtHead(7);
    D.Reverse();
    D.Traverse();
    D.swapNode(1,4);
    D.Traverse();

    cout<<"----------------"<<endl;

    D.InsertAtHead(0);
    D.InsertAtHead(2);
    D.InsertAtHead(0);
    D.InsertAtHead(0);
    D.InsertAtHead(5);
    D.Reverse();
    D.deleteZero();
    D.Traverse();
    cout<<D.getSize()<<endl;

    return 0;
}
