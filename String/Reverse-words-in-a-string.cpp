#include<bits/stdc++.h>
using namespace std;

void reverse_(char arr[],int low ,int high){
    int l=low,h=high;
    while (l<=h)
    {
        swap(arr[l],arr[h]); 
        l++;
        h--;   
    }
    
}


void reverse_words_of_str(char str[],int n){
    // string::iterator start;
    // start=str.begin();
    int start=0;
    for (int end = 0; end < n; end++)
    {
        if (str[end]==' ')
        {
            reverse_(str,start,end-1);//hame end pe space mela hai to uske ekk peche wale tak hi hum reverse karenge.
            start=end+1;
        }
    }
    reverse_(str,start,n-1); //Explicitly handel for reversing last word because their isn no space after it.
    reverse_(str,0,n-1);//for reversing whole string .
}

int main(){

    string s="Welocome to GFG";int n=s.length();
    char str[n];
    strcpy(str,s.c_str());
    reverse_words_of_str(str,n);
    for (int i = 0; i < n; i++)
    {
        s[i]=str[i];
    }  
    cout<<s;  
}
