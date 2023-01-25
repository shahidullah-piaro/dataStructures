#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node* nxt;
};

class LinkedList{
public:
    node *head;

    LinkedList()
    {
        head = NULL;
    }

    node* CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtHead(int data)
    {
        node *newnode = CreateNewNode(data);
        newnode->nxt = head;
        head = newnode;
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
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(40);
    l.InsertAtHead(30);
    l.InsertAtHead(20);
    l.InsertAtHead(10);
    l.Traverse();
    l.InsertAtAnyIndex(1,15);
    l.Traverse();
    return 0;
}
