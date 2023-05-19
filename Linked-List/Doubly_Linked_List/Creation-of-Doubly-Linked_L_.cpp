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

// INSERT At the end.---------------------------------------------------------------------------
void create_Doubly_LL(struct node*&head,int data1){     
    //this creation is the insert at the end of Doubly LinkedList.
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
// --------------------------------------------------------------------------------------------




// <----------------------------------- Insert At the begin -----------------------------------------> 
// node* create_Insert_at_begin_DLL(struct node**head,int data1){       <- this line also work in the place of just below line
struct node* create_Insert_at_begin_DLL(struct node**head,int data1){
    struct node*new_node=new node();
    new_node->data=data1;
    new_node->next=NULL;
    new_node->prev=NULL;
    if (*head==NULL)
    {
        *head=new_node;
    }
    else{
        // 1.new_node->next = *head;

        // The next pointer of the new node is set to the current head of the list. This ensures that the new node is inserted at the beginning of the list.

        // 2.(*head)->prev = new_node;

        // The prev pointer of the current head of the list is set to the new node. This ensures that the old head of the list is linked to the new node.

        // 3.*head = new_node;

        // The head pointer of the list is updated to point to the new node. This ensures that the new node becomes the new head of the list.

        new_node->next=*head;
        (*head)->prev=new_node;
        (*head)=new_node;
    }
    return new_node;
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
    // create_Doubly_LL(head,1);
    // create_Doubly_LL(head,2);
    // create_Doubly_LL(head,3);
    // create_Doubly_LL(head,4);
    // create_Doubly_LL(head,5);
    // create_Doubly_LL(head,6);
    // -------------------------------------

    head=create_Insert_at_begin_DLL(&head,1);
    create_Insert_at_begin_DLL(&head,2);
    create_Insert_at_begin_DLL(&head,3);
    create_Insert_at_begin_DLL(&head,4);
    create_Insert_at_begin_DLL(&head,5);
    Traversal_DLL(head);
}
