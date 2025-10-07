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

void deleteNode(Node* &head,Node* &tail,int pos){

    if(head==tail){
        Node* temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }
    else if(pos<=1){
        Node* temp=new Node();
        temp=head;
        head=temp->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
    }else if(pos>=LengthLL(head)){
        Node* temp=tail->prev;
        temp->next=NULL;
        tail->prev=NULL;
        delete tail;
        tail=temp;
    }else{
        // Node* temp=new Node();
        // Node* prevNode=NULL;
        // Node* currNode=head;
        // while(pos!=1){
        //     pos--;
        //     prevNode=currNode;
        //     currNode=currNode->next;
        // }
        // prevNode->next=currNode->next;
        // currNode->next->prev=prevNode;
        // delete currNode;

        Node* prevNode=NULL;
        Node* currNode=head;
        while(pos!=1){
            pos--;
            prevNode=currNode;
            currNode=currNode->next;
        }
        Node *nextNode=currNode->next;
        prevNode->next=nextNode;
        nextNode->prev=prevNode;
        currNode->next=NULL;
        currNode->prev=NULL;
        delete currNode;
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
    insertAtTail(head,tail,70);
    printLL(head);


    cout<<"Afer inserting at position"<<endl;

    insertAtPosition(head,tail,25,3);
    printLL(head);

    // cout<<"After deleting a node at head"<<endl;

    // deleteNode(head,tail,1);
    // printLL(head);
    cout<<"After deleting a node at tail"<<endl;
    deleteNode(head,tail,8);
    printLL(head);
    return 0;
}