
void swap_function(int arr[3][3]){
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C/2; j++)
        {
            swap(arr[i][j],arr[i][C-j]);
        }
    }
}