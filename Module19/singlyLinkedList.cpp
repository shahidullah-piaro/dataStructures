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
    //Search Last Node
    int getLast()
    {
        node* a = head;
        if(a!=NULL)
        {
            return a->data;
        }
        return -1;
    }
    //Find out average
    double getAverage()
    {
        double sum = 0;
        node* a = head;
        while(a!=NULL)
        {
            sum += a->data;
            a = a->nxt;
        }
        return sum/sz;
    }
};

int main()
{
    LinkedList l;

    int n;
    cin>>n;
    int inttt;
    vector<int>a;
    for(int i=0 ; i<n ; i++)
    {
        cin>>inttt;
        a.push_back(inttt);
    };

    for(int i=0;i<n;i++)
    {
        l.InsertAtHead(a[i]);
    }

    cout<<l.getLast()<<endl;
    cout<<l.getAverage()<<endl;
    return 0;
}
