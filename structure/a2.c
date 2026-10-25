#include<stdio.h>
union human
{
    char name[20];
    struct person
    {
        int date;
        int month;
        int year;



    }age;


}u[10];
void main()
{
    int a,i;
    for(i=0;i<3;i++)
    {
        scanf("%s",u[i].name);
        printf("%s\n",u[i].name);
        printf("Enter the date month and year");
        scanf("%d%d%d",&u[i].age.date,&u[i].age.month,&u[i].age.year);
        a = 2025 - u[i].age.year;
        if(a<=18)
        {

          printf("the person is child\n");



        }
        else if(a<=60 && a>=18)
        {
            printf("the person is adlt\n");
                 

        }
        else
        {
            printf("the person is old");
        }


    }




}