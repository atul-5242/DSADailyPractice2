#include <bits/stdc++.h> 
using namespace std; 

// --------------------------------------------------------------------------

// Naive Code:



int nonRep(string &str) 
{
    for(int i=0;i<str.length();i++){
        bool flag=false;
        for(int j=0;j<str.length();j++){
            if(i!=j&&str[i]==str[j]){
                flag=true;
                break;// by using this braek statement we have not to traverse the whole string if we find the any occurence
            }
        }
        if(flag==false)return i;
    }
    return -1;
}

// --------------------------------------------------------------------------





// ------------------------Better Approach--------------------------------------------------

const int CHAR=256;
int nonRep_Better_Approach(string &str) 
{
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++){
        if(count[str[i]]==1)//here is the main logic that only one character 1 time .
            return i;
    }
    return -1;
}
// --------------------------------------------------------------------------



// -----------------------Efficient Approach---------------------------------------------------
 
// by taking this approch that if we found the character more than 1 time than asing its value to -2 and the character which is only found one time assinged the ( index value ).

int nonRep_Efficient_Approach(string &str){
    int fi[256]={0};
    fill(fi,fi+CHAR,-1);
    for (int i = 0; i < str.length(); i++)
    {
        if (fi[str[i]]==-1)
        {
            fi[str[i]]=i;
        }
        else{
             fi[str[i]]=-2;       
        }
    }
    int res=INT_MAX;
    for (int i = 0; i < str.length(); i++)
    {
        if (fi[str[i]]>=0)
        {
            res=min(res,i);
        }
    }
    return (res==INT_MAX)?-1:res;
}



int main(){


    string str = "geeksforgeeks";
    cout<<"Index of leftmost non-repeating element:"<<endl;
    cout<<nonRep_Better_Approach(str)<<endl;  
    cout<<nonRep_Efficient_Approach(str)<<endl;  


}