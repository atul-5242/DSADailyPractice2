// #include <bits/stdc++.h> 
// using namespace std; 

// struct Node{
//     int data;
//     Node* prev;
//     Node* next;
//     Node(int d){
//         data=d;
//         prev=NULL;
//         next=NULL;
//     }
// };

// void printlist(Node *head){
//     Node *curr=head;
//     while(curr!=NULL){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }cout<<endl;
// }

// int main() 
// { 
// 	Node *head=new Node(10);
// 	Node *temp1=new Node(20);
// 	Node *temp2=new Node(30);
// 	head->next=temp1;
// 	temp1->prev=head;
// 	temp1->next=temp2;
// 	temp2->prev=temp1;
// 	printlist(head);
// 	return 0;
// } 



#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
    struct node*prev;
};


void create_Doubly_LL(struct node*&head,int data1){
    struct node*new_node=new node();
    new_node->data=data1;
    new_node->next=NULL;
    new_node->prev=NULL;
    if (head==NULL)
    {
        head=new_node;
    }
    else{
        struct node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->prev=temp;
    }
    
}


void Traversal_DLL(node *head){//here is the local head of this function
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } 
}

int main(){
    struct node*head=NULL;
    create_Doubly_LL(head,1);
    create_Doubly_LL(head,2);
    create_Doubly_LL(head,3);
    create_Doubly_LL(head,4);
    create_Doubly_LL(head,5);
    create_Doubly_LL(head,6);
    Traversal_DLL(head);
}































