#include<iostream>
using namespace std;
class Program
{

    public:
    int arr1[5],arr2[5];
    int rear = -1;
    int front = -1;

    int high = -1;
    int lower = -1;

    void insert(int n)
    {
        if(rear == 4)
        {
            cout<<"Queue is full"<<endl;
        }
        if(rear == -1)
        {
            rear = front = 0;
            
        }
        else
        {
            rear++;
        }
        arr1[rear] = n;
    }

    void removeelement()
    {

        if (rear == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        high = 0;

        for (int i = rear; i >= front; i--)
        {
            arr2[high] = arr1[i];
            high++;
        }

        lower = 0;
    }
    void display()
    {
        while (lower < high)
        {
            cout << arr2[lower] << endl;
            lower++;
        }
    }
};
int main()
{
    Program p1;
    p1.insert(1);
    p1.insert(2);
    p1.insert(3);
    p1.insert(4);
    p1.insert(5);

    p1.removeelement();
    p1.display();


    return 0;
}