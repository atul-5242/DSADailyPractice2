#include<iostream>
using namespace std;

// Love bhaiya taken base index as 1. 
class heap{


// Insertion in heap:->

    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }


    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        // for checking in inside that their is not present like smaller node in the parent.
        while (index>1)
        {
            int parent=index/2;
            if(arr[index]>arr[parent]){
                swap(arr[index],arr[parent]);
                index=parent;
            }else{
                return ;
            }
        }  
    }



    void print(){
        for (int i = 1; i <= size;i++ )
        {
            cout<<arr[i]<<" ";
        }
        
    }



// Deleting from the heap:->

// T.C=O(log(n))

void deletefromheap(){
    if (size==0)
    {
        cout<<"Nothing to delete.";
    }
    
    // step 1:-
    swap(arr[1],arr[size]);
    // Or this line swap(arr[1],arr[size]); can be also written as arr[1]=arr[size]

    // step 2:-
    size--;

    // step 3:- take root node to its correct position.

    int i=1;
    while (i<size)
    {
        int leftIndex=2*i;
        int rightIndex=2*i+1;

        if (leftIndex<size && arr[i]<arr[leftIndex])
        {
            swap(arr[i],arr[leftIndex]);
            i=leftIndex;
        }
        else if(rightIndex<size && arr[i] < arr[rightIndex]){
            swap(arr[i],arr[rightIndex]);
            i=rightIndex;
        }
        
    }
    return ;
}







// Heapify code:->

// Max heap :->
void max_heapify(int arr[],int size,int index){     // T.C --> O(log(n))
    int i=index;
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if (left<size && arr[left]>arr[largest])
    {
        largest=left;
    }
    if (right<size && arr[right]>arr[largest])
    {
        largest=right;
    }
    if (largest!=i)
    {
        swap(arr[largest],arr[i]);
        max_heapify(arr,size,largest);
    }
    return ;
}

// Min heap function:->
void min_heapify(int arr[],int size,int index){

    int left=2*index;
    int right=2*index+1;
    int smallest=index;
    if (left<=size && arr[smallest]>arr[left])
    {
        smallest=left;
    }
    if (right<=size && arr[smallest]>arr[right])
    {
        smallest=right;
    }
    if (smallest!=index)
    {
        swap(arr[index],arr[smallest]);
        min_heapify(arr,size,smallest);
    }
    return ; 
}


// Heap sort:->

void heapSort(int arr[],int size1){     //T.C = O(nlog(n))
    
    // I have tried by recurrsion but wrong.
    
    // int temp=1;
    // if (size1==0)
    // {
    //     return ;
    // }
    
    // swap(arr[1],arr[size1]);
    // for (int i = (size1-temp)/2; i>0; i--)
    // {
    //     max_heapify(arr,(size1-temp),i);
    // }
    
    // heapSort(arr,size1-temp);


    
    while (size1>1)
    {
        // step 1: swap:
        swap(arr[size1],arr[1]);
        // step 2:
        size1--;
        max_heapify(arr,size1,1);
    }
    

    
}


};



int main(){
    int j=0,k=0;
    // cout<<"Hello ji.";
    heap h;
    // for (int k = 0; k < 5; k++)
    // {
        // cin>>i;
        // h.insert(50);
        // h.insert(55);
        // h.insert(53);
        // h.insert(52);
        // h.insert(54);
    // }
    // h.deletefromheap();
    // h.deletefromheap();
    // h.deletefromheap();



    // h.print();
    // cout<<endl;


    int arr[]={-1,54,53,55,52,50};
    int n=5;

    // heap building --> O(n) just below code from for( n/2 to >0)      => MAX_HEAP:-
    // for (int i = n/2; i>0; i--)
    // {
    //     h.max_heapify(arr,n,i);
    // }

    // cout<<"Printing array for max heap:-";
    // for (int i = 1; i <=n; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    // for (int i = n/2; i>0; i--)
    // {
    //     h.min_heapify(arr,n,i);
    // }


    h.heapSort(arr,n);  


    cout<<"Printing array for min heap:-";
    for (int i = 1; i <=n; i++)
    {
        cout<<arr[i]<<" ";
    }
    





}


// Good explaination by Sir :-
// -1 55 54 53 50 52 <-(values)
//  0 1  2  3  4  5  <-(index)
//          55(1)
//      54(2)      53(3)
// 50(4)    52(5)