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

void Traversal_DLL(node *head){//here is the local head of this function
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } 
}

void del_Last_Node(struct node*&head){
    // I hav ewritten right code.
    if (head==nullptr)
    {
        return ;
    }
    if (head->next==nullptr)
    {
        delete head;
        head=nullptr;
        return ;
    }
    else{
        node *temp=head;
        while (temp->next->next!=NULL){
                temp=temp->next;
        }
        delete temp->next; 
        temp->next=nullptr;
        // <----------------------------------GFG code :------------------------>
        node *curr=head;   //I also like this code.
        while(curr->next!=NULL)
            curr=curr->next;
        curr->prev->next=NULL;
        delete curr;
        return ;
        // <-------------------------------------------------------------------->
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
    del_Last_Node(head);
    Traversal_DLL(head);
}