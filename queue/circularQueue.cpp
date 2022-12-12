#include<iostream>
using namespace std;
class queue{
    int rear,front,size,*arr;
    public:
    queue(int size){
        this->size=size;
        front=-1;
        rear=-1;
        arr=new int[size];
    }

    void enqueue(int element){
        if(rear==-1&& front==-1){
            rear=0;
            front=0;
            arr[rear]=element;
        }
        else if((rear+1)%size==front){
            cout<<endl<<"circular queue is full";
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=element;
        }
    }

    void dequeue(){
        if(rear==-1&& front==-1){
            cout<<endl<<"circular queue is empty";
        }
        else if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%size;
        }
    }

    void display(){
        if(front==-1&& rear==-1){
            cout<<endl<<"circular queue is empty";
        }
        else {
            for(int i=front;i<=rear;i++){
                cout<<endl<<arr[i];
            }
        }
    }

};

int main(){
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
            cout << endl<< "enter elements you want to enqueue ";
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

