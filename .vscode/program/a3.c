#include<stdio.h>
struct product
{
   int id;
   char name[20];
   float price;


}s[10];
void main()
{
  int i;
  for(i=0;i<10;i++)
  {
   printf("Enter the value of %d",i+1);
   scanf("%d",&s[i].id);
   scanf("%s",s[i].name);
   scanf("%f",&s[i].price); 



  }
  int match=0;
  int n;
  printf("Enter the value to be search ");
  scanf("%d",n);
  int pos;
  for(i=0;i<10;i++)
  {
      if(s[i].id==n)
      {
        match=1;
        pos=i;
        break;
      }

  }
  printf("id no= %d\n",s[pos].id);
  printf("name = %s\n",s[pos].name);
  printf("price = %d\n",s[pos].price);


}