#include<iostream>
#include<fstream>
using namespace std;
void inputdata(int arr[10][10],int x,int y)
{
    int i,j;
    cout<<"Enter the number of element"<<endl;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

}
void putdata(int arr[10][10],int x,int y)
{
    int i,j;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
int main()
{
    int a,b,i,j;
    try
    {
        cout<<"Enter the row and coloum of matrix"<<endl;;
        cin>>a>>b;
        if(a<=0 || b<=0)
        {
            throw "the enter the row and coloum is invalid";
        }
        int a1[10][10],b1[10][10],c1[10][10];
        cout<<"first of a1 matrix input data"<<endl;
        inputdata(a1,a,b);
        cout<<"second of b1 matrix input data"<<endl;
        inputdata(b1,a,b);

        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                c1[i][j] = a1[i][j] + b1[i][j];
            }
            cout<<endl;
        }
        cout<<"addition of two matrix is output is"<<endl;
        putdata(c1,a,b);

        ofstream out("matrix.txt");
        
        out<<"resultant matrix is a1 + b1"<<endl;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                out<<c1[i][j]<<" ";
            }
            out<<endl;
        }
        out.close();
        
        ifstream in("matrix.txt");
        
        int d1[10][10];
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                in>>d1[i][j];
            }
            
        }
        putdata(d1,a,b);
        in.close();
    }

        catch(const char *answer)
        {
            cout<<answer;
        }   
    
    return 0;
}