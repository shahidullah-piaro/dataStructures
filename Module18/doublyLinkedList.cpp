#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* nxt;
    node* prv;
};

class DoublyLinkList
{
public:
    node *head;
    DoublyLinkList()
    {
        head = NULL;
    }

    node* CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void InsertAtHead(int data)
    {
        node *newnode = CreateNewNode(data);
        if(head==NULL)
        {
            head = newnode;
            return;
        }
        newnode->nxt = head;
        head->prv = newnode;
        head = newnode;
    }

    void InsertAtAnyIndex(int index, int data)
    {
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!=index-1)
        {
            if(a==NULL)
            {
                break;
            }
            a = a->nxt;
            cur_index++;
        }
        if(a==NULL)
        {
            cout<<"Can't insert"<<endl;
        }
        node* newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        node* b = a->nxt;
        if(b!=NULL)
        {
            b->prv = newnode;
        }
        a->nxt = newnode;
        newnode->prv = a;
    }

    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<endl;
    }
};

int main()
{
    DoublyLinkList dl;
    dl.InsertAtHead(40);
    dl.InsertAtHead(30);
    dl.InsertAtHead(20);
    dl.InsertAtHead(10);
    dl.Traverse();
    dl.InsertAtAnyIndex(1,15);
    dl.Traverse();
    return 0;
}
