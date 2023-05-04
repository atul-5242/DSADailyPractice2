#include <bits/stdc++.h> //import for INT_MAX
using namespace std;

// Navie Arroch:->
int Leftmost_Repeating_Character(string &str){
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i+1; j <str.length(); j++)
        {
            if (str[i]==str[j])
            {
                return i;
            }
        }
    }
    return -1;
}

// ---------------------------------------- Better Approach --------------------------------------------->
const int Char= 256;//total ascii value here assuming that 256 
int Leftmost_Repeating_Character_Better_Approach(string &str){
    int count[Char]={0};
    for (int i = 0; i < 256; i++)
    {
        // cout<<str[i]<<" ";
        count[str[i]]++;
        // cout<<count[str[i]]<<endl;
    }
    for (int i = 0; i < 256; i++)
    {
        if (count[i]>1)
        {
            return i;
        }
    }
    return -1;
}
// ------------------------------------------------------------------------------------->


// ----------------------------------Efficient Approach-1--------------------------------------------------->

int Leftmost_Repeating_Character_Efficient_Approach_1(string &str){
    int first_index[Char]={0};
    fill(first_index,first_index,-1);
    int res=INT_MAX;//this has written to show that res has infinte value.
    for (int i = 0; i < str.length(); i++)
    {
        int fi=first_index[str[i]];
        if (fi==-1)
        {
            first_index[str[i]]=i;//storing every new Character index at that point of time index.
        }
        else{
            res=min(res,fi);
        } 
    }
    return (res==INT_MAX)?-1:res;
}




// ------------------------------------------------------------------------------------->



// ---------------------------------Efficient Approach-2---------------------------------------------------->


int Leftmost_Repeating_Character_Efficient_Approach_2(string & str){
    bool visited[Char];
    fill(visited,visited+Char,false);
    int res=-1;//here this initialized with -1 because if at th end no value is repeated agian first time then it will return -1 value.

    for (int i = str.length(); i >=0; i--)
    {
        if (visited[str[i]])
        {
            res=i;
        }
        else{
            visited[str[i]]=true;
        }
    }
    return res;
}

// ------------------------------------------------------------------------------------->
int main(){
    
    string str = "geeksforgeeks";
    // string str="cabbad";
    cout<<Leftmost_Repeating_Character(str)<<endl; // --- point 11
    cout<<Leftmost_Repeating_Character_Better_Approach(str)<<endl; // ---point 12
    cout<<Leftmost_Repeating_Character_Efficient_Approach_1(str)<<endl;//---point 1
    cout<<Leftmost_Repeating_Character_Efficient_Approach_2(str)<<endl;// --- point 2
    // point 11 :->                                                             |
    char arr[]="qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqPooooooooooooo";
    cout<<arr['A'];//I do this because to see that by writting the character in the array than it  Yes, that's correct. When you use a character as an index to access an array in C++, it is automatically converted to its corresponding ASCII value. which start working like integer index.
}