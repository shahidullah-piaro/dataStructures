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

    LinkedList()
    {
        head = NULL;
    }

    //Creates a new node with data = value and next = NULL
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    //Insert new value at Head
    void InsertAtHead(int value)
    {
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
    node* reverse(node* head)
    {
        if (head == NULL || head->nxt == NULL)
            return head;
        // Recursive call
        node* rest = reverse(head->nxt);
        head->nxt->nxt = head;

        head->nxt = NULL;

        return rest;
    }
    //Get linked list value with index
    int getValue(int indx)
    {
        node* a = head;
        int indexx = 0;
        while(a!=NULL)
        {
            if(indexx==indx)
                return (a->data);
            a = a->nxt;
            indexx++;
        }
        return -1;
    }
    //Count total number of index
    void getSize()
    {
        node* a = head;
        int index = 0;
        while(a!= NULL)
        {
            a = a->nxt;
            index++;
        }
        cout<<index<<endl;

    }

    //swap node values
    void swapFirst()
    {

        node* temp = head;
        int N = 0;
        while(temp != NULL)
        {
            N++;
            temp = temp->nxt;
        }

        node* pos1 = head;
        node* pos2 = head;
        for(int i = 1; i < 1; i++)
        {
            pos1 = pos1->nxt;
        }
        for(int i = 1; i < 2; i++)
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
    /*
        LinkedList l;
        cout<<l.getSize()<<"\n";
        l.InsertAtHead(5);
        cout<<l.getSize()<<"\n";
        l.InsertAtHead(6);
        l.InsertAtHead(30);
        cout<<l.getSize()<<"\n";
        l.InsertAtHead(20);
        l.InsertAtHead(30);

        cout<<l.getValue(2)<<"\n";

        cout<<l.getValue(6)<<"\n";
    */



    LinkedList l;
    l.getSize();
    l.InsertAtHead(5);
    l.getSize();
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    l.getSize();
    l.InsertAtHead(20);
    l.InsertAtHead(30);
    cout<<l.getValue(2)<<endl;
    cout<<l.getValue(6)<<endl;
/*
    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();
*/
    l.head = l.reverse(l.head);
    l.Traverse();
    l.head = l.reverse(l.head);
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.head = l.reverse(l.head);
    l.Traverse();
    return 0;
}
