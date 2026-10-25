#include<iostream>
using namespace std;
class node
{
    public:
    int val;
    node* next;

    node(int d)
    {
        val = d;
        next = NULL;
    }
    void begin(node* &head,int num)
    {
        node* first = new node(num);
        first->next = head;
        head = first;

    }
    void add(node* &head,int val)
    {
        node* newnode = new node(val);
        node* temp = head;
        while(temp!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;

    }
    void display(node* &head)
    {
        node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL";

    }
};
int main()
{
    node* head(NULL);
    head->begin(head,2);
    display(head);
    begin(head,3);
    display(head);


    return 0;
}