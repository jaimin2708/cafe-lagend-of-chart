#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
    void insertathead(node* &head,int val)
    {
        node *newnode = new node(val);
        newnode->next=head;
        head = newnode;
    } 
    void display(node *head)
    {
        node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        }

    }       
};
int main()
{
    node* head = NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,1);
     display(head);


    return 0;
}