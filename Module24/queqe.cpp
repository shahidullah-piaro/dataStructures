#include<bits/stdc++.h>

using namespace std;
//Queue using static array
const int MAX_SIZE = 500;

class Queue
{
public:
    int a[MAX_SIZE];
    int l,r;
    Queue()
    {
        l = 0;
        r = -1;
    }
    //O(1)
    void enqueue(int value)
    {
        if(r+1 >= MAX_SIZE)
        {
            cout<<"Queue is full!"<<endl;
            return;
        }
        r++;
        a[r] = value;
    }
    //O(1)
    void dequeue()
    {
        if(l>r)
        {
            cout<<"Queue is full!"<<endl;
            return;
        }
        l++;
    }
    //O(1)
    int front()
    {
        if(l>r)
        {
            cout<<"Queue is full!"<<endl;
            return -1;
        }
        return a[l];
    }
    //O(1)
    int size()
    {
        return r-l+1;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout<<"Q size : "<<q.size()<<endl;

    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    q.dequeue();

    cout<<"Q size : "<<q.size()<<endl;
    return 0;
}
