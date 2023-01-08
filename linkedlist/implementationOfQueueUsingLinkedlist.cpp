#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
    }
};
void enqueue(node* &head,int data){
    node* temp;
    node* newNode=new node(data);
    
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    } 
    newNode->next=NULL;
    newNode->data=data;
    temp->next=newNode;
}
void dequeue(node* &head){
node* temp;
temp=head;
head=head->next;
delete temp;
}
void display(node* head){
    node* temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    int ch,element;
    node* head=NULL;
    while(1){
     cout << endl<< "enqueue :1";
     cout << endl<< "dequeue :2";
     cout<<endl<<"display : 3";
     cout<<endl<<"exit : 4";
     cout<<endl<<"enter your choice : ";
     cin>>ch;
     switch(ch){
        case 1:
        cout<<endl<<"enter the element to enqueue : ";
        cin>>element;
        enqueue(head,element);
        break;

        case 2:
        dequeue(head);
        break;

        case 3:
        display(head);
        break;

        case 4:
        exit(0);
        break;

        default:
        cout<<endl<<"wrong choice";
    }
    }
    
     
}
