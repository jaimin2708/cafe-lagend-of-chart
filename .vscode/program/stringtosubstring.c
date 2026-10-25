#include<stdio.h>
void main()
{
    char s1[100],s2[100],s3[100],s4[100],s5[100];

    int i=0,i2=0,i3=0,i4=0,i5=0;
    int l=0,a=0,d=0,s=0;

    printf("Enter the string\n");
        gets(s1);

    while(s1[i]!='\0')
    {
        if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            s2[i2] = s1[i];
            l++;
            i2++;
        }
        else if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s3[i3] = s1[i];
            a++;
            i3++;
        }
        else if(s1[i] >= '0' && s1[i] <= '9')
        {
            s4[i4] = s1[i];
            d++;
            i4++;
        }
        else
        {
            s5[i5] = s1[i];
            s++;
            i5++;
        }
        i++;
    }
    s2[i2]='\0';
    s3[i3]='\0';
    s4[i4]='\0';
    s5[i5]='\0';

     printf("The lowercase latter is %d\n",l);
     printf("The uppercase latter is %d\n",a);
     printf("The total digit is %d\n",d);
     printf("The total number of special characters is %d\n",s);

     puts(s2);
     puts(s3);
     puts(s4);
     puts(s5);

}