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

void insertAtBeginning(node* &head,int data){
    node* newNode=new node(data);
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}

void insertAtEnd(node* &head,int data){
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

void deleteAtBeginning(node* &head){
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
void insertAtGivenPosition(node* &head,int data,int pos){
    node* newNode=new node(data);
    // cout<<endl<<"enter position";
    // cin>>pos;
    if(head==NULL){
        head=newNode;
        return;
    }
    else{
     node* temp=head;
    
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    }
   
}

int main(){
    node* head=NULL;
    insertAtBeginning(head,3);
    insertAtBeginning(head,4);
    insertAtBeginning(head,5);
    insertAtBeginning(head,6);
    display(head);
    insertAtEnd(head,2);
    display(head);
    deleteAtBeginning(head);
    display(head);
    insertAtGivenPosition(head,10,1);
    display(head);
}
