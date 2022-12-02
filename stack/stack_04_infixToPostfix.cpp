#include<iostream>
using namespace std;
class stack{
    private:
    int size,*arr,top;
    public:

    stack(int size){
     this->size=size;
     arr=new int [size];
     top=-1;
    }

    void push(int n){
        // if(top==size-1){
        //     cout<<endl<<"stack overflow";
        // }
        // else{
            top++;
            arr[top]=n;
        // }
    }

    char pop(){
        // if(top==-1){
        //     cout<<endl<<"stack underflow";
        // }
        // else{
            top--;
          return arr[top];
        // }
    }
    char peak(){
        return arr[top];
    }

    int priority(char x){
        if(x=='^'){
            return 3;
        }
        else if(x=='*'||x=='/'){
         return 2;
        }
        else if(x=='-'||x=='+'){
         return 1;
        }
        else
        return 0;

    }
};
int main(){
    stack s(10);
    char exp[30],*e,x;
    cout<<endl<<"enter your expression :";
    cin>>exp;
    e=exp;
    while(*e!='\0'){
         if ((*e >= 'a' && *e <= 'z') || (*e >= 'A' && *e <= 'Z') || (*e >= '0' && *e <= '9')){
             cout<<*e;
         }
         else if(*e=='('){
           s.push(*e);
         }
         else if(*e==')'){
             while((x=s.pop())!='('){
             cout<<x;
             }
         }
         else
         {
             while(s.priority(s.peak())>=s.priority(*e)){
                 cout<<s.pop();
             }
             s.push(*e);
         }e++;
    }
    while(s.peak()!=-1){
        cout<<s.pop();
    }
    cout<<endl;
    return 0;
    
}