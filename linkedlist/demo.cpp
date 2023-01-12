#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

void insertAtBeginning(Node* &head,Node* &tail ,int data)
{
    if(head==NULL){
    Node* newNode = new Node(data);
    newNode->next = NULL;
    newNode->prev=NULL;
    head = newNode;
    tail=newNode;
    return;
    }
    Node* newNode = new Node(data);
    newNode->next = head;
    newNode->prev=NULL;
    head = newNode;
}

void insertAtEnd(Node* &head,Node* &tail,int data)
{
    Node* newNode = new Node(data);
    newNode->data = data;
    newNode->next = NULL;
    
    if (head == NULL)
    {
        head = newNode;
        tail= newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev = tail;
    tail=newNode;
    
}
void insertAtGivenposition(Node* &head,Node* &tail,int data,int pos)
{
    int i=1;
    Node* newNode = new Node(data);
    newNode->next = NULL;
    newNode->prev = NULL;
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node* temp = head;
    while(i<pos-1){
        temp=temp->next;
        i++;
  }
    temp->next->prev =newNode;
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
}
void DeleteAtBeginning(Node* & head,Node* &tail){
    if(head==tail){
        delete head;
        head = NULL;
        tail = NULL;
    }
    Node *temp;
    temp=head;
    head=head->next;
    head->prev = NULL;
    delete temp;
}
void deleteAtEnd(Node* &head,Node* &tail){
    Node *temp=tail;
  
    if(head==tail){
        head=NULL;
        tail = NULL;
    }
    else{
        tail=tail->prev;
        tail->next=NULL;
    }
    delete temp;
    
}
void DeleteAtGivenposition(Node* &head,Node* &tail,int pos){
    int i=1;
    Node *temp,*nextnode;
    temp=head;
    while(i<pos-1){
        temp=temp->next;
      i++;
    }
    nextnode=temp->next;
    nextnode->next->prev = temp;
    temp->next=nextnode->next;
    delete nextnode;
    
}



void display(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        std::cout << temp->data << "-> ";
        temp= temp->next;
    }
   cout <<endl;
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtBeginning(head,tail,10);
    insertAtBeginning(head,tail,20);
    insertAtBeginning(head,tail,30);
    insertAtEnd(head,tail,40);
    display(head);
    insertAtGivenposition(head,tail,50,2);
    display(head);
    DeleteAtBeginning(head,tail);
    display(head);
    deleteAtEnd(head,tail);
    display(head);
    DeleteAtGivenposition(head,tail,2);
    display(head);
}
