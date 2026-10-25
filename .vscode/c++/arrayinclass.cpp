#include <iostream>
using namespace std;

class student
{
private:
    int marks[3];
    char name[20];
    int roll[5];
    int avg[5];

public:
    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter 3 marks: ";
        for (int j = 0; j < 3; j++)
        {
            cin >> marks[j];
        }
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: ";
        for (int j = 0; j < 3; j++)
        {
            cout << marks[j] << " ";
        }
        cout << endl;
    }
};

int main()
{
    student s;
    s.getdata();
    s.display();

    

    return 0;
}
