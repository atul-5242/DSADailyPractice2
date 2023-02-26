// sort(1st ittrator,1 postion ahead to the last,)

// sort function allows only on containers which allows random access[like :array,vector,deque].


#include<iostream>
#include<algorithm>//In this sort function is defined.
#include<vector>

// IF NEEDED REMOVE ITS COMMENTS:_______________________________________________________________________________>
// using namespace std;
// int main(){
//     int i=0,j=0,k=0;
//     int arr[]={10,20,5,7};
//     int n=4;//total number of elements 
//     sort(arr,arr+(n-1)+1);//here (n-1) eqaul to the last index to that place we move the pointer and after that we added +1 to make the pointer move 1 position ahead to the last index.
//     // cout<<*(arr+3);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<*(arr+i)<<" ";
//     }
//     // ---------------------------------------------------------------------------------------------------------
//     // sort(arr,arr+(n-1)+1,(greater<int>));//see this line why error came.
//     // ---------------------------------------------------------------------------------------------------------

// cout<<endl<<"Vector Start."<<endl;


// // BY VECTOR:--------------------->

//     vector<int>v={10,20,5,7};
//     sort(v.begin(),v.end());
//     for (auto i : v)
//     {
//         cout<<i<<" ";
//     }
//     // sort(v.begin(),v.end(),(greater<int>));----------------------------------------------------------->







// cout<<"\nNew own comparision function:"<<endl;








// }


// IF NEEDED REMOVE ITS COMMENTS:_______________________________________________________________________________>






// New file:--------------------------------------------------------------->




struct point{
    int x,y;
};
bool mycomp( point p1, point p2){
    return (p1.y<p2.y);
}//most important.


// #include<iostream>
using namespace std;
int main(){
    int i=0,j=0,k=0;
    
// We can wrote our own comparision function:-------------------------------------------------------------->



// for general knowledge.
// struct point p,p1;
// p.x=1;
// p.y=2;
// p1.x=3;
// p1.y=4;
// cout<<"X:"<<p.x<<" Y:"<<p.y<<endl;
// cout<<"X1:"<<p1.x<<" Y1:"<<p1.y<<endl;

    struct point arr[]={{10,9},{20,5},{7,5}};
    int n=3;//total number of elements 
    sort(arr,arr+(n-1)+1,mycomp);//here (n-1) eqaul to the last index to that place we move the pointer and after that we added +1 to make the pointer move 1 position ahead to the last index.
    // cout<<*(arr+3);
    for (auto i : arr)
    
    {
       cout<<i.x<<" "<<i.y<<endl;
    }
    
    // sort function intrenally usedf quick sort.
    // It use the hybride of 1.) Quick 2.) insertion 3.) Heap.
    // if quick sort makes unfair partition or takes more than nlog(n) time than it switchs heap sort and if array size is small than it switches to insertion sort.

    


}