#include<stdio.h>
 struct student
 {
    char name[20];
    int rollno;
 }s;
 void fun(struct student *);
void main()
{
  fun(&s);
  printf("%s %d",s.name,s.rollno);



}
void fun(struct student *p)
{
    printf("Enter the name and rollno ");
    scanf("%s%d",p->name,&p->rollno);

}