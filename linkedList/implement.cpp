#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node*next;

 Node(int data){
    this->data=data;
    this->next=NULL;

 }



};

void insertAttail(Node* &tail ,int data){
    Node* temp=new Node(data);
    tail->next=temp;
    tail=temp;

}


void insertAthead(Node* &head,int data){
    Node*temp=new Node(data);
    temp->next=head;
    head=temp;
    
}

void print(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}
int main(){

    Node *node1= new Node(10);
    

    Node*head=node1;
    Node*tail=node1;
    // insertAthead(head,12);
    // insertAthead(head,16);
    //  insertAthead(head,30);
    insertAttail(tail,12);
    print(head);
    insertAttail(tail,14);
    print(head);



}