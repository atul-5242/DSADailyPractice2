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
// In Comparision of recursive function itterative function is more efficient than the Recursive function because Itterative not take any Auxilary Space ittrative have O(1) Auxilary.Space .
    if (head==NULL)
        return ;
    cout<<head->data<<" ";
    return Traversal_SLL(head->next);
}

int main(){
node *head=NULL;
    SLL_Creation(head,5);//it is the head of the main() function.
    SLL_Creation(head,4);
    SLL_Creation(head,3);
    SLL_Creation(head,2);
    SLL_Creation(head,1);
    Traversal_SLL(head);//Recursive Traversal.
    // T.C->O(n)  S.C->O(n)
    //here n->number of nodes. 
}