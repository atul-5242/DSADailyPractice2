#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};


void insertEnd(Node *&head,int data){//see its T.C                                   ?
    Node *temp=head;
    Node *new_node = new Node(data);
    if (head==NULL)
        head=new_node;  
    else{
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new_node;
    }
}

void printlist(Node *head){
        Node *curr=head;
        while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
        }
}
int main() 
{ 
	Node *head=NULL;
	insertEnd(head,10);
	insertEnd(head,20);
	insertEnd(head,30);
	printlist(head);
	return 0;
} 
