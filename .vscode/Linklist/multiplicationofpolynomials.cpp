#include<iostream>
using namespace std;
struct term
{
    int expo;
    int coff;
};
int main()
{
    term p1[20],p2[20],p3[20];
    int i=0,j=0,k=0;
    int n1;
    cout<<"enter the total number of term in polynomials"<<endl;
    cin>>n1;
    cout<<"Enter the number of coffecient and expontential"<<endl;
    for(int i=0;i<n1;i++)
    {
        cin>>p1[i].coff>>p1[i].expo;
    }
    int n2;
    cout<<"enter the total number of term in second polynomials"<<endl;
    cin>>n2;
    cout<<"Enter the number of coffecient and expontential"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>p2[i].coff>>p2[i].expo;
    }

    while(i < n1 && j < n2)
    {
        p3[k].coff = p1[i].coff * p2[j].coff;
        p3[k].expo = p1[i].expo + p2[j].expo;
        j++;
        k++;

        
    }
}