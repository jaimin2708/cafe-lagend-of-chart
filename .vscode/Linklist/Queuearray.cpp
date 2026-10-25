#include<iostream>
using namespace std;
class Queue
{
    int arr[100];
    int size;
    int front;
    int rear;

    public:
    Queue(int n)
    {
        size = n;
        front = rear = -1;
    }
    int isfull()
    {
        if(rear >= size-1)
        {
            return 1;
        }
        else
        return 0;
    }
    int empty()
    {
        if(front == -1)
        {
            return 1;
        }
        else
        return 0;
    }
    void insert(int num)
    {
        if(isfull())
        {
            cout<<"Queue is full"<<endl;;
        }
        else
        {
            if(front == -1)
            {
            front++;
            
            }
            arr[++rear] = num;
        }
    }
    void pop()
    {
        if(empty())
        {
            cout<<"is empty"<<endl;;
        }
        else
        {
            cout<<arr[front++]<<endl;
            if(front > rear)
            {
                front = rear = -1;
            }
        }
    }
};
int main()
{
    Queue q(5);
    q.insert(20);
    q.insert(30);
    q.insert(40);
    q.insert(50);
    q.insert(60);

    while(!q.empty())
    {
        q.pop();
    }
    cout<<"endl";
    return 0;
}