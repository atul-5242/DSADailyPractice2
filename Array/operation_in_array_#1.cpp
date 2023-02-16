// Naive Approch:
// Searching an element in array:

int serach_linearly(int arr[],int iteam,int sizeofarr){   //This for arr in unsorted form if array in sorted order than serach is in O(log(n)) time.
    int i=0;        //here T.C (Time complexity:O(n))
    while(i!=sizeofarr){
        if (arr[i]==iteam){
            return 1;
        }
        i++;
    }
    return -1;
}


// Size :  Means how many element it currently sorted in it.
// Capacity :  Means how many element it can store its full storege size  like arr[10] so capacity is 10 althog if it have 5 elemnt so there is size is 5 but capacity is 10


// 2. Insert 
