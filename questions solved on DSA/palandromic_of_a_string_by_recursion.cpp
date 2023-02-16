#include<iostream>
#include<string.h>
using namespace std;
    // string str;
    // cin>>str;
    // cout<<str;              //way fo decleration of string without using string headre file.
    //     // string 

    /*
string keyword used in function.


// string  **here we can also use void char any return type according to need**
// string palandromic_string(string str){
//     cout<<str;
// }
// int main(){
//     string str="Hello_";
//     palandromic_string(str);
    
// }




*/

bool palandromic_string(char str[],int start,int end){
        if (start>=end){
            return true;
        }
        return ((str[start]==str[end]) && palandromic_string(str,start+1,end-1));
    }
int main(){
    char str[100];
    int n,i=0;
    cout<<"enter the string:=";
    cin>>str;
    // cout<<str[2]<<str[3]<<str[4];//value can be acced by index.
    n=strlen(str);
    cout<<palandromic_string(str,i,n-1);//I like it.
}