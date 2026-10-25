#include<stdio.h>
void main()
{
    char str1[100]="jaimin";
    char str2[100]="Ashikbhai";
    char str3[100]="Bhensdadiya";
    char str4[100];


int i;
for(i=0;str1[i]!='\0';i++){

     str4[i]=str1[i];
}
str4[i]=' ';
i++;

int j;
for(j=0;str2[j]!='\0';j++)
{
    str4[i+j]=str2[j];
}
str4[i+j]=' ';
i++;
j++;

  int k;
  for(k=0;str3[k]!='\0';k++)
  {
      str4[i+j+k]=str3[k];
  }
  str4[i+j+k]='\0';
  puts(str4);
  

}

