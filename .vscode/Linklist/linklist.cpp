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
            return;

        }
    }
   void reverse()
   {
        node* temp = first;
        node *ptr = NULL;
        node *num = NULL;

        
        while(temp != NULL)
        {
            num = temp->next;
            temp->next = ptr;
            ptr = temp;
            temp = num;
        }
        first = ptr;
        
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
};
int main()
{
    implemantion i;
    i.insert(10);
    i.insert(20);
    i.insert(30);
    i.insert(40);
    i.insert(50);
    i.reverse();
    i.display();    
    return 0;
}