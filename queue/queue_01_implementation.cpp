#include<iostream>
using namespace std;
class queue{
    int front,rear,size,*arr;
    public:
    queue(int n)
    {
        this->size=size;
        front=-1;
        rear=-1;
        arr=new int[size];
    }

    void enqueue(int x)
    {
     if(rear==size-1){
         cout<<endl<<"queue overfolow"<<endl;
     }

     else if(rear==-1&&front==-1){
         rear=front=0;
         arr[rear]=x;

     }

     else{
         rear++;
         arr[rear]=x;
     }
    }
    void dequeue(){
        if(rear==-1&&front==-1){
            cout<<endl<<"queue underfolow";
        }

        else if(rear==front){
            rear=front=-1;
        }

        else{
            
        }
    }
};

int main(){
    int a;
    queue q(5);
    cout<<endl<<"enter the element to enqueue : ";
    cin>>a;
    q.enqueue(a);
    

}