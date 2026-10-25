#include<stdio.h>
void main()
{
  int a[20],n;
  printf("Enter the total number of element\n");
  scanf("%d",&n);
  int i;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int num;
  int match=0;
  int pos;
  printf("Enter the number you want to delete from the array\n");
  scanf("%d",&num);

  for(i=0;i<n;i++)
  {
    if(a[i]==num)
    {
        match=1;
        pos=i;
        break;
    }
  }
  if(match==0)
  {
    printf("your number is not in the array\n");
  }

  for(i=pos;i<n-1;i++)
  {
    a[i]=a[i+1];
  }
  n--;
  if(match==1){
  for(i=0;i<n;i++)
  {
    printf("%d ",a[i]);
  }
}

}