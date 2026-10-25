#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
void main()
{
    int a,b;
    int ans;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    ans = add(a,b);
    printf("%d\n",ans);
    ans = sub(a,b);
    printf("%d\n",ans);
    ans = mul(a,b);
    printf("%d\n",ans);
    ans = div(a,b);
    printf("%d\n",ans);
    
}

int add(int a,int b)
{
    int m;
    m = a + b ;
    return(m);
}
int sub(int a,int b)
{
    int m;
    m = a - b ;
    return(m);
}
int mul(int a,int b)
{
    int m;
    m = a * b ;
    return(m);
}
int div(int a,int b)
{
    int m;
    m = a / b ;
    return(m);
}