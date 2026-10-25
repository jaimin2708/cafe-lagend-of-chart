#include<stdio.h>
struct product
{
   int id;
   char name[20];
   float price;


}s[10];
void main()
{
  int i,j;
  for(i=0;i<10;i++)
  {
   printf("Enter the value of %d",i+1);
   scanf("%d",&s[i].id);
   scanf("%s",s[i].name);
   scanf("%f",&s[i].price); 



  }
  int t;
  for(i=0;i<9;i++)
  {
    for(j=i+1;j<10;j++)
    {

        if(strcmp(s[i].name,s[j].name)>0)
        {
         t = s[i];
         s[i] = s[j];
         s[j] = t;

        }
    }
  }