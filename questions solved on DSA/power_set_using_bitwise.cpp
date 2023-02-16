#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,j,len;
    char str[100];
    cin>>str;
    len=strlen(str);
    for (int q = 0; q < len; q++)
    {
        
        while (q>0)
        {
            if (q&1==1){
                cout<<str[q];
            }
            q=q>>1;
        }
        
    }
}