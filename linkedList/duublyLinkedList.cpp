#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
 int data;
 Node*prev;
 Node*next;

 Node(int d){
    this->data=d;
    this->prev=NULL;
    this->next=NULL;

 }


};
void insertathead(Node* &head,int d){
    Node*temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;

}

void insertattail(Node* &tail,int d){
    Node*temp=new Node(d);

    tail->next=temp;

    temp->prev=tail;
    temp=tail;
}



void print(Node*& head){
    Node*temp=head;
    while(temp!=NULL){
       cout<<temp->data<<"->";
       temp=temp->next;

    }
    cout<<endl;

}


int getlength(Node*&head){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;

}




int main(){


  

//    int n;
//    cin>>n;

    Node* node1=new Node(8);
    
    Node*head=node1;
    Node*tail=node1;
    // print(head);
   
   
    
    insertathead(head,60);
    insertathead(head,56);
    print(head);
    
       
   insertattail(tail,90);
   print(tail);
    
    // cout<<getlength(head)<<endl;


   
  
  

    
    

    // insertdata(head,12);

    // print(head);
    
    

}