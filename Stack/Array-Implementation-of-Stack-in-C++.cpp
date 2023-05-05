#include<bits/stdc++.h>
using namespace std;
// User made Stack by using the top as index main concept and I get to know that we can made the function inside the Stack.




// This is Array Based:-------------------------------------------------------


struct Mystack{


    // Here Also All opertaions like push pop all are O(1);
    int *arr;
    int cap;
    int top;
    Mystack(int C){
        cap=C;
        arr = new int [C];
        top=-1;
    }
    void push(int x){
        if(top==cap-1)
            cout<<"Stack is full"<<endl;
                return;
        top++;
        arr[top]=x; 
    }
    int peek(){
        if(top==-1)
            cout<<"Stack is Empty: ";
                return INT_MIN;
        return arr[top];
    }
    int pop(){
        if(top==-1)
            cout<<"Stack is Empty"<<endl;
                return INT_MIN;
        int temp=arr[top];
        top--;
        return temp;
    }
    int size(){
        return (top+1);
    }
    // bool isempty(){              <---------------- one way to write.
    //     if (top==-1)
    //         return true;
    //     else
    //         return false;
    bool isempty(){
        return top==-1;
        }  
    
};


// -------------------------------------------------------------------------------




// ---------This is Vector Based:--------------------------------------------------
struct MyStack_By_vector
{

    // The time complexity of the operations in MyStack_By_vector can be analyzed as follows:

    // push() takes constant time, O(1), to insert an element at the end of the vector.
    // pop() takes constant time, O(1), to remove the last element from the vector.
    // size() takes constant time, O(1), to return the number of elements in the vector.
    // isEmpty() takes constant time, O(1), to check if the vector is empty.
    // peek() takes constant time, O(1), to return the last element of the vector.
    vector <int> v;
    void push(int x){
        v.push_back(x);
    }
    int  pop(){
        int temp=v.back();
        v.pop_back();
        return temp;
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();
    }
    int peek(){
        return v.back();// For get the top most element .
    }
};

int main(){
 
// --------------------------------------------------------------------------------------

    MyStack_By_vector s2;

    s2.push(10);
    s2.push(20);
    s2.push(30);
    s2.push(40);
    s2.push(50);
    s2.push(80);

    cout<<s2.pop()<<endl;
    cout<<s2.size()<<endl;
    cout<<s2.peek()<<endl;
    cout<<boolalpha<<s2.isEmpty()<<endl;
    while (!s2.isEmpty())
    {
        cout<<s2.peek()<<" ";
        s2.pop();
    }



// ---------------------------------------------------------------------------------





    Mystack s(5);
    // point 1,2 trying to implement the opertaions we have to take care of some points of under flow and over flow. 
    // cout<<s.peek()<<endl;//<---1->can not accesseble
    // // cout<<s.pop()<<endl;//<----2->underflow
 
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(80);//<------------>overflow
    while (!s.isempty())
    {
        cout<<s.peek()<<" ";
        s.pop();
    }
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<boolalpha<<s.isempty()<<endl;


    
}
