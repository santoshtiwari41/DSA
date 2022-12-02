#include<iostream>
using namespace std;
class stack{
    private:
    int top;
    int *arr;
    int size;
    public:
    stack(int size)
    {
        this->size=size;
        top=-1;
        arr=new int[size];
    } 
    void push(int element){
        if(size-top>1){
             top++;
            arr[top]=element;
           
        }
        else
        cout<<"\nstack overflow"<<endl;
    }
    void pop(){
        if(top>=0){
            top--;

        }
        else
        cout<<"stack is empty"<<endl;
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else
        cout<<"stack is empty"<<endl;
    }

};
int main(){
  stack s(5);
  s.push(4);
  s.push(6);
  s.push(4);
  s.push(5);
  s.push(6);
  s.push(7);
  return 0;

}