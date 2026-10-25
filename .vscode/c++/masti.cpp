#include<iostream>
using namespace std;
int sum(int a,int b=20)
{
   int z = a + b;
   cout<<z<<endl;
}
int main()
{
   int a = 5;

   sum(a);
   sum(a,5);



    return 0;
}