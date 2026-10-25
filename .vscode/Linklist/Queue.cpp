#include<iostream>
using namespace std;
class node
{
    friend class Queue;
    int data;
    node *next;
    public:
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
class Queue
{
    node *head;
    node *tail;

    public:
    Queue()
    {
        head = tail = NULL;
    }
    bool empty()
    {
        return head == NULL;
    }
    void insert(int n)
    {
        node *nn = new node(n);
        if(empty())
        {
            head = tail = nn;
        }
        else
        {
            tail->next = nn;
            tail = nn;
        }
    }
    void pop()
    {
        if(empty())
        {
            cout<<"node is empty"<<endl;
        }
        else
        {
            node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    int front()
    {
         if(empty())
        {
            cout<<"node is empty"<<endl;
        }
        else
       {
            return head->data;
        }

    }

};
int main()
{
    Queue q;
    q.insert(10);
    q.insert(20);
    q.insert(30);
    q.insert(40);
    q.insert(50);

    while(!q.empty())
    {
       cout<<q.front()<<endl;
        q.pop();
    }
    cout<<"endl";

    return 0;
}