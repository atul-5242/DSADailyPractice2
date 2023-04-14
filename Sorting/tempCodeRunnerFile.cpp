void Lomuto_Partition_modified(int arr[], int size, int pivote)//Most important algo............
{
    swap(arr[pivote],arr[size-1])
    int i = -1;//because we don't know  how many smaller element is present so we take it -1 at starting we don't  know the smaller element so we assume that at satring we don't know how many smaller element so we don't know the smaller element window size so we take it as -1 in starting after that we are incease it .........

    
    for (int j = 0; j < size - 1; j++)
    {
        if (arr[j] < pivote)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1],arr[size-1]);
}
