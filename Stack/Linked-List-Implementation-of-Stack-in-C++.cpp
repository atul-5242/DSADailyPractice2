#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node(int d){
        data=d;
        next = NULL;
    }
};

struct MyStack
{
    Node *head;
    int size_;
    MyStack(){
        head=NULL;
        size_=0;
    }


    void push(int x){
        Node *temp=head;
        Node *new_node = new Node(x);
        if(head==NULL)//important 
            head=new_node;
        else{
            while (temp->next!=NULL)
            {
                temp=temp->next;    
            }
            temp->next=new_node;
            size_=size_+1;
        }
    }

    void pop(){
        Node *temp=head;
        if(head==NULL)
            return;
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
        }
        else
        // {
        //     while (temp->next->next!=NULL)
        //     {
        //         temp=temp->next;    
        //     }
        //     Node *del=temp->next;
        //     temp->next=NULL;
        //     free(del);<-------------------------this way of writing is not correct in c++
        //     size_=size_-1;
        // }
        {

            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            Node *del = temp->next;
            temp->next = NULL;
            delete del;//<--------------this is the correct way of writing.
        }
    }


    int size(){//point #2
        int count=0;
        Node *temp=head;
        if(head==NULL)
            return 0;
        else{
            count=1;
            while (temp->next!=NULL)
            {
                count++;
                temp=temp->next;    
            }
        }
        return count;
    }
// point #2---------------------------------------- 
//  int size()
//     {
//         return size_;
//     }

// ----------------------------------------------

    bool isEmpty(){//point #1
        if(head==NULL)
            return true;
        else
            return false;
    }
// point #1---------------------------------------- 
// bool isEmpty()
//     {//how simply the code is reduces.
//         return head == NULL;
//     }
// ----------------------------------------------


    int peek(){
        Node *temp=head;
        if(head==NULL)
            return INT_MAX;
        else
        {
            while (temp->next!=NULL)
            {
                temp=temp->next;    
            }
            return temp->data;
        }
    }
};



int main(){
    MyStack t;
    t.push(6);
    t.push(5);
    t.push(4);
    t.push(3);
    t.push(2);
    t.push(1);
    cout<<"Checking Empty or not:"<<t.isEmpty()<<"\n";
    cout<<"Size:"<<t.size()<<"\n";
    cout<<t.peek()<<" ";
    t.pop();
    cout<<t.peek()<<" ";
    t.pop();
    cout<<t.peek()<<" ";
    t.pop();
    cout<<t.peek()<<" ";
    t.pop();
    cout<<t.peek()<<" ";
    t.pop();
    cout<<t.peek()<<" ";
    t.pop();
    cout<<"\n";
    cout<<"Checking Empty or not:"<<t.isEmpty()<<"\n";
    cout<<"Size:"<<t.size()<<"\n";



    // My stack implementation is little diffrent from GFG But both are correct and 
    // GFG https://ide.geeksforgeeks.org/online-cpp14-compiler/a7134a17-c078-4ac5-a731-d57ea22580e5
    // this codebove like code is of O(1) but this is not in my case because i am not adding element in the front i am adding element in the back so i need to traverse so whatever area i done some trversal than there is O(n) <- time where n = number of nodes.   


}