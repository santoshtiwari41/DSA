#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};
void insertAtBeginning(node** head,int newData){
    node* newNode=new node();
    newNode->data=newData;
    newNode->next=(*head);
    (*head)=newNode;
}
void deleteAtBeginning(node* head){
node* temp;
temp=head;
head=head->next;
delete temp;

}
void insertAtEnd(node** head,int newData){
    node* temp;
    node* newNode=new node();
    
    temp=(*head);
    while(temp!=NULL){
        temp=temp->next;
    } 
    newNode->next=NULL;
    newNode->data=newData;
    temp->next=newNode;

}


void display(node* head){
    node* temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

}
int main(){
    node* head=NULL;
    insertAtBeginning(&head,10);
    insertAtBeginning(&head,15);
    insertAtBeginning(&head,5);
    deleteAtBeginning(head);
    insertAtEnd(&head,50);
    
    display(head);
    return 0;
}