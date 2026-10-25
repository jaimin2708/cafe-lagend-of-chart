#include<stdio.h>
struct students
{
   char name[20];
   int id;
   int m1,m2,m3;
   int total



}s[10];
void main()
{
   int i;
   for(i=0;i<10;i++)
   {
    printf("Enter the value of all");
     scanf("%s",s[i].name);
     scanf("%d",&s[i].id);
     scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);

    s[i].total=s[i].m1+s[i].m2+s[i].m3;
    
   }
    int maxindex=s[0].total;
     int pos;
    for(i=1;i<10;i++){
    if(maxindex<s[i].total)
    {
      maxindex=s[i].total;
      pos =i;
      


    }
}
  printf("name = %s\n",s[pos].name);
  printf("id no = %d",s[pos].id);
  printf("total = %d",s[pos].total);


}