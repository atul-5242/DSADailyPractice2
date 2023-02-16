void merge_string(char* arr[],int s,int e){
     int mid=(s+e)/2;
     int len1=mid-s+1;
     int len2=e-mid;
     char **first=malloc(sizeof(char)*len1);
     char **second=malloc(sizeof(char)*len2);
     for(int i=0;i<len1;i++){
      first[i]=malloc(sizeof(arr[s+i]));
      strcpy(first[i],arr[s+i]);
     }
    for(int i=0;i<len2;i++){
        second[i]=malloc(sizeof(arr[mid+i+1]));
        strcpy(second[i],arr[mid+1+i]);
     }
     int i=0,j=0,k=s;
     while(i<len1 && j<len2){
        if(strcmp(first[i],second[j]) <0){
           strcpy(arr[k++],first[i++]);
        }
        else{
            strcpy(arr[k++],second[j++]);
        }

     }
     while(i<len1){
        strcpy(arr[k++],first[i++]);
     }
     while(j<len2){
        strcpy(arr[k++],second[j++]);
    }

}

void merge(char *arr[],int s,int e){
     if(s>=e){
         return;
     }
     int mid=(s+e)/2;
     merge(arr,s,mid);
     merge(arr,mid+1,e);
     merge_string(arr,s,e);
}

// ************************************************driver code*****************************
int main(){
    int size;
    printf("enter the size of array of string :");
    scanf("%d",&size);
    char **arr=(char**)malloc(sizeof(char*)*size);
    for(int i=0;i<size;i++){
     arr[i]=(char*)malloc(sizeof(char)*20);
     printf("enter the %d string:",i+1);
     scanf("%s",arr[i]);
    }
     merge(arr,0,size-1);
     for(int i=0;i<size;i++){
    // arr[i]=(char*)malloc(sizeof(char)*20);
     printf(" the %d string:",i+1);
     printf("%s\n",arr[i]);
    }
    return 0;
}
