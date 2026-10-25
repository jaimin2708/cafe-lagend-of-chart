#include<iostream>
using namespace std;
class car
{
    public:
    string name;
    int price;
    int seats;
    string type;

    void display()
    {
         cout<<name<<" "<<price<<" "<<seats<<" "<<type<<endl;
    }
    car(string n,int p,int s,string t)
    {
        cout<<n<<" "<<p<<" "<<s<<" "<<t<<endl;
    };
int main()
{
    car c1("honda city",50000,5,"sedan");
   // c1.name = "hoanda city";
    //c1.price = 500000;
    //c1.seats = 5;
    //c1.type = "sedan";

    car c2("maruti",800000,5,"hacthback");
   // c2.name = "kai";
    //c2.price = 1200000;
    //c2.seats = 5;
    //c2.type = "hacthback";

    // c1.display();
    //c2.display();
    //cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
    // cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;

    return 0;

}
}