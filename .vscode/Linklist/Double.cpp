#include<iostream>
using namespace std;
class implemantion;
class node
{
    friend class implemantion;
    int data;
    node *next;
    node *prev;

    public:
    node(int d)
    {
        data = d;
        next = prev = NULL;
    }
};
class implemantion
{
    friend class node;
    node *first;
    public:

    implemantion()
    {
        first = NULL;
    }
    void insert(int d)
    {
        if(first==NULL)
        {
            first = new node(d);
            return;
        }
        else
        {
            node *nn = new node(d);
            node* temp = first;

            while(temp->next!=NULL)
            {
                temp = temp->next;
            }
            temp->next = nn;
            nn->prev = temp;
            return;

        }
    }
    void mid(int x,int d)
    {
        node *temp = first;

        while(temp->data != x)
        {
            temp = temp->next;
        }
        node *nn = new node(d);
        nn->next = temp;
        nn->prev = temp->prev;
        temp->prev->next = nn;
        temp->prev = nn;
    }
    void insertatlast(int d)
    {
        node *temp = first;

        while(temp ->next != NULL)
        {
            temp = temp->next;
        }
        node *nn = new node(d);

        temp->next = nn;
        nn->prev = temp;
    }
    void insertatbegining(int d)
    {
        node *nn = new node(d);
        first->prev = nn;
        nn->next = first;
        first = nn;
    }
     void display()
    {
        node* temp = first;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL";
        
    }
    void cut(int x)
    {
        node *temp = first;

        while(temp->data != x)
        {
            temp = temp->next;
        }
        temp->prev->prev->next = temp;
        temp->prev = temp->prev->prev;
    }
    void reverse()
    {
        node *temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        while(temp!= NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->prev;
        }
        cout<<"NULL";
       
    }
};
int main()
{
    implemantion i;
    i.insert(10);
    i.insert(20);
    i.insert(30);
    i.insert(40);
    i.insert(50);
    i.mid(30,35);
    i.insertatlast(60);
    i.insertatbegining(5);
    i.cut(30);
    i.reverse();
    i.display();    
    return 0;
}