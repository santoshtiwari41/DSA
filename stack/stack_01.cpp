#include<iostream>
#include<stack>
using namespace std;
int main(){
    int i;
    stack<int> s;
    // to check size of the stack
    cout<<endl<<"size of the stack before the pushing and popping operation is :"<<s.size()<<endl;
    s.push(1);
    s.push(2);
    s.push(3);
    // to check the top value of the stack
    cout<<"top element is :"<<s.top()<<endl;
   
   s.pop();
   cout<<"top value after the pop:"<<s.top()<<endl;
    return 0;

}