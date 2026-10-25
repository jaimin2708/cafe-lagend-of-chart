#include<iostream>
using namespace std;
class implemantion;
class node
{
    friend class implemantion;
    int data;
    node *next;

    public:
    node(int d)
    {
        data = d;
        next = NULL;
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
            first->next = first;
            return;
        }
        else
        {
            node *nn = new node(d);
            node* temp = first;
            node *dal = first;

            while(temp->next!=dal)
            {
                temp = temp->next;
            }
            temp->next = nn;
            nn->next = dal;
            return;

        }
    }
    void insertatbefore(int d,int num)
    {
        node *temp = first;
        node *nn = new node(d);
        while(temp->next->data != num )
        {
            temp = temp->next;
        }
        nn->next = temp->next;
        temp -> next = nn;
        
        
    }
    void insertatafter(int d,int num)
    {
        node *temp = first;

        while(temp->data != num)
        {
            temp = temp->next;
        }
        node *nn = new node(d);
        nn->next = temp->next;
        temp->next = nn;
    }
    void deletefirstnode()
    {
        node *temp = first;
        node *dal = first;
        while(temp->next != dal)
        {
            temp = temp->next;
        }
        first = first->next;
        temp->next = first;
    }
    void deletelastnode()
    {
        node *temp = first;
        node *dal = first;
        while(temp->next->next != dal)
        {
            temp = temp->next;
        }
        temp->next = dal;
    }
    void display()
    {
        node* temp = first;
        node *dal = first;
        while (temp->next != dal)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<temp->data<<"->";
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
    i.insertatbefore(25,30);
    i.insertatafter(35,30);
    i.deletefirstnode();
    i.deletelastnode();
    i.display();

    return 0;
}