#include<iostream>
#include<string.h>

using namespace std;
int main(){
    char str[100];
    cout<<"Enter the string:";
    cin>>str;
    // cout<<"\n"<<str[strlen(str)-1];
    for (int i = 0; i <= strlen(str); i++)
    {
        int j=strlen(str)-1;
        int num=i;
        while(num>0){
            if (num&1==1)
            {
                cout<<str[j];
                j++;
                
            }
            num=num>>1;
            
        }
        cout<<"\n";
    }
    
    
}