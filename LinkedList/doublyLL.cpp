#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(){
        this->prev=NULL;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }else{
        Node* temp=new Node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void printLL(Node* head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(tail==NULL){
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }else{
        Node* temp=new Node(data);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

int LengthLL(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtPosition(Node* &head,Node* &tail,int data,int pos){
    if(pos<1){
        cout<<"Invalid Position"<<endl;
        return;
    }
    else if(pos==1){
        insertAtHead(head,tail,data);
        return;
    }else if(pos>LengthLL(head)){
        insertAtTail(head,tail,data);
        return;
    }else{
        Node* temp=new Node(data);
        Node* prevNode=NULL;
        Node* currNode=head;
        while(pos!=1){
            pos--;
            prevNode=currNode;
            currNode=currNode->next;
        }
        prevNode->next=temp;
        temp->prev=prevNode;
        temp->next=currNode;
        currNode->prev=temp;
    }
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,10);
    insertAtTail(head,tail,60);
    printLL(head);


    cout<<"Afer inserting at position"<<endl;

    insertAtPosition(head,tail,25,3);
    printLL(head);
    return 0;
}