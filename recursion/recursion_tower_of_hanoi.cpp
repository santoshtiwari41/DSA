#include<iostream>
using namespace std;
void towers(int n,char A,char B,char C){
    if(n==1){
        cout<<endl<<"move disk "<<n<<" from "<<A<<" to "<<C;
        return;
    }
    towers(n-1,A,C,B);
    cout<<endl<<"move disk "<<n<<" from "<<A<<" to "<<C;
    towers(n-1,B,A,C);

}
int main(){
    towers(3,'A','B','C');
    return 0;

}