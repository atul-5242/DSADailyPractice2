#include<iostream>
using namespace std;






int main(){
    
    // arr[][5]  we can left the place vaccant as in row but can not be of col.
    // variable sized array :-- Arr[n][m] the value of n and m is taken by the user.




// we can only ommit 1st square bracket not others whatever n number of dimensions for array..


    // Other way of Creation of Array:--
// ***************************************************************************************************
    // 1.) By the help of Double pointer.
    

    //------------------------------------------------------------------------ 
    // creating Single dimensonal Array:-


    //   SOME MISTAKES:------------------

    // int *arr=new int[5]={0};//wrong way to inslise
    // for (auto &&i : *arr)//wrong way to access the value.
    // {
    //     cout<<i;
    // }

    // int *arr= new int[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     arr[i]=1+i;
    // }

    // for (auto &&i : arr)
    // {
    //     cout<<i;
    // }
    // delete[] arr;
      int* arr = new int[5];

    // initialize the array with some values
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    // iterate over the array using a range-based for loop
   for (auto& element : arr) {
    cout << element << " ";
}

// -----------------------------------------------------------------------------> 
// why for range is not working like that.
// this error came when i am using for range loop to access value

// The error message you're seeing is telling you that the range-based for loop requires a "begin" function, but none was found for the type of arr. This error occurs because arr is a pointer, and pointers do not have the necessary functions to support a range-based for loop.

// To use a range-based for loop to iterate over the elements of an array, you can use a pointer to the first element of the array along with the size of the array. Here's an example:

// c
// Copy code
// int arr[] = {1, 2, 3, 4, 5};
// const int size = sizeof(arr) / sizeof(int);

// for (int& element : arr) {
//     // do something with element
// }
// In this example, we create an array arr with the values {1, 2, 3, 4, 5}, and then compute the size of the array using sizeof(arr) / sizeof(int). We then use a range-based for loop to iterate over the elements of the array, assigning each element to the variable element.

// Note that element is a reference to each element of the array, so we can modify the values of the array elements directly using this reference.

// If you need to use dynamic memory allocation and new to allocate the array, you can modify the above code like so:// arduino
// Copy code
// int* arr = new int[5];
// const int size = 5;

// for (int i = 0; i < size; i++) {
//     int& element = arr[i];
//     // do something with element
// }

// delete[] arr;
// In this example, we allocate an array of 5 integers using new, and then compute the size of the array as 5. We then use a for loop to iterate over the elements of the array using their indices, and assign each element to the variable element using a reference. After we are done using the array, we free its memory using delete[].

    // delete []arr;
// -----------------------------------------------
    // int arr1[]={1,2,3,4,5,6,7,8,9,10};
    // for (auto &&i : arr1)
    // {
    //     cout<<i<<" ";
    // }
// -----------------------------------------------
    // free the memory allocated for the array

    // 2.)
    delete[] arr;

















    //----------------------------------------------------------------------------------- 
    //  Multi dimensinal array:-


    // int m=3,n=2;
    // int ** arr;
    // arr = new int *[m];
    // for (int i = 0; i < m; i++)
    // {
        
    // }
    


}


