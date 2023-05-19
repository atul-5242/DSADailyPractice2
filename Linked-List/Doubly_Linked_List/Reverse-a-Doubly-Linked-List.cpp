#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
    struct node*prev;
};

// INSERT At the end.---------------------------------------------------------------------------
void create_Doubly_LL(struct node*& head,int data1){     
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


void Traversal_DLL(node *head){//here is the local head of this function
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } 
}


void reverse(node *&head){
    node *temp=NULL;
    node *curr=head;
    // I got understant.
    while (curr!=NULL)
    {
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    if (temp!=NULL)
    {
        head=temp->prev;
    }
}


// node *reverse(node *head){
//     node *temp=NULL;
//     node *curr=head;
//     while(curr!=NULL){
//         temp=curr->prev;
//         curr->prev=curr->next;
//         curr->next=temp;
//         curr=curr->prev;
//     }
//     if(temp!=NULL)
//         head=temp->prev;
//     return head;
// }





int main(){

    struct node * head=NULL;
    

    create_Doubly_LL(head,8);//okey Done.
    create_Doubly_LL(head,4);//okey Done.
    create_Doubly_LL(head,3);//okey Done.
    create_Doubly_LL(head,2);//okey Done.
    create_Doubly_LL(head,1);//okey Done.
    create_Doubly_LL(head,1);//okey Done.

    cout << "Original Doubly Linked List: ";
    Traversal_DLL(head);
    cout<<endl;

    reverse(head);

    cout << "Reversed Doubly Linked List: ";
    Traversal_DLL(head);

    return 0;       

}