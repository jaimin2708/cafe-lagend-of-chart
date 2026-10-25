#include<iostream>
#include<cstring>
using namespace std;
class add
{
    public:
    char s1[100];
    char s2[100];
    add(char str1[],char str2[])
  {
        strcpy(s1,str1);
        strcpy(s2,str2);
    }
    void operator +()
    {
        cout<<"the adding two string"<<endl<<strcat(s1,s2)<<endl;
    }

};
int main()
{
    char t1[] = "hello";
    char t2[] = " how are you";
    add a1(t1,t2);
    +a1;

    return 0;
}