#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int id;
    int value;
    node *Left;
    node *Right;
    node *parent;
};


class BinaryTree{
public:
    node* root;


    BinaryTree()
    {
        root = NULL;
    }

    node* CreateNewNode(int id, int value)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->value = value;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void Insertion(int id, int value)
    {
        node* newnode = CreateNewNode(id, value);
        if(root==NULL)
        {
            root = newnode;
            return;
        }
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            if(a->Left != NULL){
                q.push(a->Left);
            }
            else{
                //Insert in left child of node a
                a->Left = newnode;
                newnode->parent = a;
                return;
            }
            if(a->Right != NULL){
                q.push(a->Right);
            }
            else{
                //Insert in right child of node a
                a->Right = newnode;
                newnode->parent = a;
                return;
            }

        }
    }

    void BFS()
    {
        if(root == NULL)
            return;
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p = -1, l = -1 , r= - 1;
            if(a->Left != NULL){
                l = a->Left->value;
                q.push(a->Left);
            }
            if(a->Right != NULL){
                r = a->Right->value;
                q.push(a->Right);
            }
            if(a->parent != NULL)
                p = a->parent->value;
            cout<<"Node = "<<a->value<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<" Parent Node = "<<p<<"\n";

        }
    }

    void DFS(node *a)
    {
        if(a==NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        DFS(a->Left);
        DFS(a->Right);
    }

    void Inorder(node *a)
    {
        if(a==NULL)
        {
            return;
        }
        Inorder(a->Left);
        cout<<a->value<<" ";
        Inorder(a->Right);
    }

    void Preorder(node *a)
    {
        if(a==NULL)
        {
            return;
        }
        cout<<a->value<<" ";
        Preorder(a->Left);
        Preorder(a->Right);
    }

    void Postorder(node *a)
    {
        if(a==NULL)
        {
            return;
        }

        Postorder(a->Left);
        Postorder(a->Right);
        cout<<a->value<<" ";
    }

    void Search(node* a, int value)
    {
        if(a==NULL)
            return;
        if(a->value == value)
        {
            cout<<a->id<<" ";
        }
        Search(a->Left , value);
        Search(a->Right , value);
    }
};


int main()
{
    BinaryTree bt;
    bt.Insertion(0,20);
    bt.Insertion(1,10);
    bt.Insertion(2,22);
    bt.Insertion(3,5);
    bt.Insertion(4,12);
    bt.Insertion(5,21);
    bt.Insertion(6,25);
    bt.Insertion(7,3);
    bt.Insertion(8,15);

    bt.BFS();
    cout<<endl;
    bt.Inorder(bt.root);
    cout<<endl;
    bt.Preorder(bt.root);
    cout<<endl;
    bt.Postorder(bt.root);
    return 0;
}
