#include<iostream>
using namespace std;
class stack{
    private:int *arr,size,top;
    public:
    stack(int size){
        top=-1;
        this->size=size;
    }
    void push (int n){
        if(top==size-1){
            cout<<endl<<"stack is full"<<endl;
        }
        else{
            top++;
            arr[top]=n;
        }

    }
    void pop(){
        if(top==-1){
            cout<<endl<<"stack is empty";
        }
        else{
            top--;
        }
    }
    void peek(){

        if(top>=0){
            cout<<endl<<"top element is : ";
            cout<<arr[top];
        }
        else
        cout<<"stack is empty"<<endl;
    }
    void display(){
        if(top>=0){
            cout<<endl<<"stack element is "<<endl;
            for(int i=top;i>=0;i--){
            cout<<arr[i]<<endl;
        }
        }
        else{
            cout<<"stack is empty";
        }
    }
};
int main(){
    stack s(5);
    int x,ch;

    while (1){
    cout<<endl<<"1 : push"<<endl;
    cout<<"2 :pop"<<endl;
    cout<<"3 :peek"<<endl;
    cout<<"4 :display"<<endl;
    cout<<"5 :EXIT"<<endl;
    cout<<"enter your choice : ";
    cin>>ch;

        switch(ch){
        case 1:
        cout<<endl<<"enter the numbers to add  :";
        cin>>x;
        s.push(x);
        break;

        case 2:
        s.pop();
        break;

        case 3:
        s.peek();
        break;

        case 4:
        s.display();
        break;

        case 5:
        exit(0);
        break;

        default:
        cout<<"wrong choice"<<endl;
    }
    }
    return 0;
    
}