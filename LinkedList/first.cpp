#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void printLL(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int LengthLL(Node *head){
    Node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtHead(Node* &head,Node* &tail,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &head,Node* &tail,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;
}
void insertAtPosition(Node* &head,Node* &tail,int pos,int data){
    if(pos<1){
        cout<<"Invalid Position"<<endl;
        return;
    }
    else if(pos==1){
        insertAtHead(head,tail,pos);
        return;
    }
    else if(pos>LengthLL(head)){
        insertAtTail(head,tail,pos);
        return;
    }
    else{
    Node *newnode=new Node(data);
    Node* curr=NULL;
    Node* prev=NULL;
    curr=head;
    while(pos!=1){
        pos--;
        prev=curr;
        curr=curr->next;
    }
    prev->next=newnode;
    newnode->next=curr;
    if(curr==NULL){
        tail=newnode;
    }
}

}

void deleteNode(Node* &head,Node* &tail,int pos){
    if(pos<1){
        cout<<"Invalid Position"<<endl;
        return;
    }
    if(head==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    if(head==tail){
        delete head;
        head=NULL;
        tail=NULL;
        return;
    }
    if(pos==1){
        Node*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else if(pos==LengthLL(head)){
        Node* prev=head;
        while(prev->next!=tail){
            prev=prev->next;
        }
        prev->next=NULL;
        delete tail;
        tail=prev;
    }else{
        Node* prev=NULL;
        Node* curr=head;
        while(pos!=1){
            pos--;
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    Node *first=new Node(10);
    Node *second=new Node(20);
    Node *third=new Node(30);
    Node *fourth=new Node(40);
    Node *fifth=new Node(50);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=NULL;
    Node *head=first;
    
    
    cout<<"Printing Linked List"<<endl;
    printLL(head);

    int x=LengthLL(head);
    cout<<"Length of Linked List is "<<x<<endl;


    Node *tail=fifth;
    // insertAtHead(head,tail,17);
    // printLL(head);

    // insertAtTail(head,tail,60);
    // printLL(head);

    // insertAtPosition(head,tail,3,25);
    // printLL(head);



    deleteNode(head,tail,5);
    printLL(head);

return 0;
}