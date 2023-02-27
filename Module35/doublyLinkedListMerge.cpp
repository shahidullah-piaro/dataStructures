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
    node *tail;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
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
    void insertHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head==NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }
    //Inserts a node with given data at head
    void insertTail(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head==NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        node *a = tail;
        newnode->prv = a;
        a->nxt = newnode;
        tail = newnode;
    }
    //Inserts the given data at the given index
    //Time Complexity : O(n)
    void insertMid(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            insertHead(data);
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
    //Return a vector for merge linked list
    vector<int> nodeInVector()
    {
        vector<int>nodes;
        node *a = head;
        while(a != NULL)
        {
            nodes.push_back(a->data);
            a = a->nxt;
        }
        return nodes;
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

//Merge a linked list
vector<int> mergeLinkedList(DoublyLinkedList X)
{
    return X.nodeInVector();
}

int main()
{
    DoublyLinkedList D;
    D.insertHead(10);
    D.insertHead(20);
    D.insertHead(30);
    D.insertHead(40);
    D.insertTail(5);
    D.insertTail(4);
    D.insertTail(3);
    D.insertTail(2);
    D.insertMid(D.getSize()/2, 15);


    cout<<D.getSize()<<endl;
    D.Traverse();


    DoublyLinkedList D2;
    D2.insertHead(10);
    D2.insertHead(20);
    D2.insertTail(5);
    D2.insertTail(4);
    D2.insertMid(D2.getSize()/2, 15);


    vector<int>forMerge = mergeLinkedList(D2);
    for(int i=0;i<forMerge.size();i++)
        D.insertHead(forMerge[i]);

    cout<<D.getSize()<<endl;
    D.Traverse();
    return 0;
}
