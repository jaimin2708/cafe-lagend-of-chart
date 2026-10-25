#include<iostream>
using namespace std;
#include<queue>
class node
{
    friend class implementation;
     public:
    int data;
    node *right;
    node *left;

    node(int d)
    {
        data = d;
        right = NULL;
        left = NULL;
    }
};
class implementation
{
    public:
     int c = -1;
    
    node* buildtree(int nodes[])
    {
        c++;
        if(nodes[c] == -1)
        {
            return NULL;
        }
        node* newnode = new node(nodes[c]);
        newnode->left = buildtree(nodes);
        newnode->right = buildtree(nodes);

        return newnode;
    }
    int display(node* root)
    {
        if(root == NULL)
        {
            return 1;
        }
        cout<<root->data;
        display(root->left);
        display(root->right);
    }
    int displayinorder(node* root)
    {
        if(root == NULL)
        {
            return 1;
        }
        displayinorder(root->left);
        cout<<root->data;
        displayinorder(root->right);
    }
    int displaypostorder(node *root)
    {
        if(root == NULL)
        {
            return 1;
        }
        displaypostorder(root->left);
        displaypostorder(root->right);
        cout<<root->data;

    }
    int displaylevel(node *root)
    {
        queue<node*> q;

        if(root == NULL)
        {
            return 1;
        }
        q.push(root);
        q.push(NULL);
        
        if(q.empty())
        {
            return 1;
        }
        while(!q.empty())
        {
            node *temp = q.front();
            q.pop();
            if(temp == NULL)
            {
                cout<<endl;
            }
            else
            {
                if(temp->left != NULL)
                q.push(temp->left);
                if(temp->right != NULL)
                q.push(temp->right);
                
                q.push(NULL);
                cout<<temp->data;
                
            }
        }

    }
    void daimeter()
};
int main()
{
    int nodes[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    implementation i;
    node* root = i.buildtree(nodes);

    cout<<root->data<<endl;;
    i.display(root);
    cout<<endl;
    i.displayinorder(root);
    cout<<endl;
    i.displaypostorder(root);
    cout<<endl;
    i.displaylevel(root);

    return 0;
}