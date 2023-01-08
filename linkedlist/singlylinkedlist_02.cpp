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
    else if(pos==1){
        node* newNode=new node(data);
    newNode->data=data;
    newNode->next=head;
    head=newNode;
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
void deleteAtEnd(node* &head){
    node* temp;
    node* prevNode;
    temp=head;
    while(temp->next!=NULL){
        prevNode=temp;
        temp=temp->next;
    }
    if(head==temp){
        head=NULL;
    }
    else{
        prevNode->next=NULL;
    }
    delete temp;
}
void deleteAtGivenPosition(node* &head,int pos){
    int i=1;
        node* temp;
        node* nextnode;
    temp=head;
    if(pos==1){
       node* temp;
       temp=head;
       head=head->next;
       delete temp; 
     }
     else{
while(i<pos-1){
        temp=temp->next;
        i++;
    }
    nextnode=temp->next;
    temp->next=nextnode->next;
    delete nextnode;

     }
    
}

int main(){
    int ch,a,position;
    node* head=NULL;
   
    while (1)
    {
        cout << endl<< "INSERT AT BEGINNING :1";
        cout << endl<< "INSERT AT END :2";
        cout << endl<< "INSERT AT GIVEN POSITION :3";
        cout << endl<< "DELETE AT BEGINNING :4";
        cout << endl<< "DELETE AT END :5 ";
        cout << endl<< "DELETE AT given position : 6";
            
        cout << endl<< "DISPLAY : 7";
        cout<<endl<<"EXIT : 8";

        cout<<endl<<"ENTER YOUR CHOICE ...... ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << endl<< "enter elements you want to insert";
            cin >> a;
            insertAtBeginning(head,a);
            break;

        case 2:
            cout << endl<< "enter elements you want to insert";
            cin >> a;
           insertAtEnd(head,a);
            break;

        case 3:
           cout<<endl<<"enter position you want to delete : ";
           cin>>position;
           cout << endl<< "enter elements you want to insert";
           cin >> a;
          insertAtGivenPosition(head,a,position);
            break;

         case 4:
          deleteAtBeginning(head);
            break;

         case 5:
          deleteAtEnd(head);
          break;

         case 6:
          cout<<endl<<"enter position you want to delete : ";
          cin>>position;
          deleteAtGivenPosition(head,position);
          break;

        case 7:
        display(head);
        break;

        case 8:
            exit(0);

        default:
            cout << endl<< "wrong choice";
        }
    }
    return 0;
}
