#include<iostream>
using namespace std;

struct node//creation of data type of Node.
{
    int data;
    node *next;
    node(int x){//here in c++ we can use this like counstruct to insliaze a value in structure.
        data=x;
        next=NULL;
    }
};


// here SLL means = Singly LinkedList
// if we not using the & with the head than during the function call the pointer variable also get copied into the function and the value that present in the function of Creation_SLL wil be a copied value that will not reflect the changes in the main function if we are pass by value like:-node *head <- to the function 

//  if we want that value will relect than we have to pass by refrece:-like :- node *&head .<-- this is the way of or syantxt of passing the pointer by referece.

void SLL_Creation(node *&head,int data){//HERE is the original head
    //This is the way of passing the The value of head by refrence by doing this :--This will make sure that any changes made to head within the function are reflected back to the calling function.
    node *temp=head;
    node *new_node = new node(data);
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

void Traversal_SLL(node *head){//here is the local head of this function
    node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    } 
}

int main(){
    node *head=NULL;
    SLL_Creation(head,5);//it is the head of the main() function.
    SLL_Creation(head,4);
    SLL_Creation(head,3);
    SLL_Creation(head,2);
    SLL_Creation(head,1);
    Traversal_SLL(head);
}




// Alternatively, you can also modify the function to return the new head pointer and update it in the main function:

// node* SLL_Creation(node *head, int data)      //In this type of function we are not passing by the referece we are just returing the node* type changed value back to the , main function  so in this case we not have to pass by reference.
// {
//     node *temp=head;
//     node *new_node = new node(data);
//     if (head==NULL)
//         head=new_node;  
//     else{
//         while (temp->next!=NULL)
//         {
//             temp=temp->next;
//         }
//         temp->next=new_node;
//     }
//     return head;
// }

// int main(){
//     node *head=NULL;
//     head = SLL_Creation(head,5);//point 1
//     head = SLL_Creation(head,4);
//     head = SLL_Creation(head,3);
//     head = SLL_Creation(head,2);
//     head = SLL_Creation(head,1);


//     // head = SLL_Creation(head,5);  //point 2
//     // SLL_Creation(head,4);
//     // SLL_Creation(head,3);
//     // SLL_Creation(head,2);
//     // SLL_Creation(head,1);

// // point 1 way and point 2 way both way of creation will worked.

//     Traversal_SLL(head);
// }
