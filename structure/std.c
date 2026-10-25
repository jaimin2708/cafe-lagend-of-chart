#include<stdio.h>
struct sttable{
    int rno;
    char name[20];
    int sub[3];
    int total;

};
void main()
{
 int i,j,max,pos=0;
 struct sttable student[10];
 for(i=0;i<10;i++)
 {
    scanf("%d%s",&student[i].rno,student[i].name);
    for(j=0;j<3;j++)
    {
        scanf("%d",&student[i].sub[j]);
    }
    for(i=0;i<10;i++)
    {
        student[i].total=0;
    }
    for(i=0;i<10;i++)
    {
        student[i].total=0;
        {
            for(j=0;j<3;j++)
            {
                student[i].total=student[i].total+student[i].sub[j];
            }
        }
    }
 }



}