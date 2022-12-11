#include <iostream>
using namespace std;
class queue
{
    int front, rear, size, *arr;

public:
    queue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    void enqueue(int x)
    {
        if (rear == size - 1)
        {
            cout << endl
                 << "queue overfolow" << endl;
        }

        else if (rear == -1 && front == -1)
        {
            rear = 0;
            front = 0;
            arr[rear] = x;
        }
        else
       {
        rear++;
        arr[rear] = x;
       }
    }

    
 void dequeue()
{
    if (rear == -1 && front == -1)
    {
        cout << endl
             << "queue underfolow";
    }

    else if (rear == front)
    {
        rear = -1;
        front = -1;
    }

    else
    {
        front++;
    }
}
void display()
{
    if (rear == -1 && front == -1)
    {
        cout << endl
             << "stack underflow";
    }

    else
    {
        for (int i = front; i <= rear; i++)
        {
            
            cout << arr[i];
        }
    }
}
};
int main()
{
    int a;
    queue q(5);
    int ch;
    while (1)
    {
        cout << endl
             << "ENQUEUE :1";
        cout << endl
             << "DEQUEUE :2";
        cout << endl
             << "DISPLAY :3";
        cout << endl
             << "EXIT :4";
        cout << endl
             << "enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << endl<< "enter elements you want to enqueue";
            cin >> a;
            q.enqueue(a);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            exit(0);

        default:
            cout << endl<< "wrong choice";
        }
    }
}