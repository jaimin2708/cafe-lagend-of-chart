#include<stdio.h>
void swap (int *,int *);
void main()
{
    int a=100;
    int b=200;
    int *p;
    int *q;
    p=&a;
    q=&b;

    swap(p,q);
    printf("a=%d and  b=%d",a,b);

    
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;



}