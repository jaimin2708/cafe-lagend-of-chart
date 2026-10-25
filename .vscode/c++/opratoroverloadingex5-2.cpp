#include<iostream>
using namespace std;
class dis
{
    int feet;
    int inch;
    public:
    void getdata()
    {
        cout<<"Enter the feet and inch"<<endl;  
        cin>>feet>>inch;
    }
    void display()
    {
        cout<<feet<<endl<<inch<<endl;
    }
    dis operator+(dis d1)
    {
        dis temp;
        temp.feet = feet + d1.feet;
        temp.inch = inch + d1.inch;
         if(temp.inch >= 12)
        {
            temp.feet += temp.inch / 12;
            temp.inch = temp.inch % 12;
        }
        return temp;
    }
    dis operator-(dis d1)
    {
        dis temp;
        temp.feet = feet - d1.feet;
        temp.inch = inch - d1.inch;
        if(temp.inch < 0)
        {
            temp.feet -= 1;
            temp.inch += 12;
        }
        return temp;
    }
};
int main()
{
    dis d,f,e;
    d.getdata();
    f.getdata();
    e = d + f;
    e.display();
    e = d - f;
    e.display();

    return 0;

}