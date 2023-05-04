#include<iostream>
using namespace std;

void print_indexes_where_pattern_matches(string &txt,string &pattern){
    // -------------------------------------
    // int n=txt.length()-pattern.length()+1;<----------//here we not add like this this i wrong <--- because index starts from 0 so it came to that index by itself because we are not counting 1 we are counting 0 so if on subtracting value is 2 than: we get right 3 value : 0 1 2 (we not have to get 1 2 3)  okey.
    // ---------------------------------------------------------
    int n=txt.length();//<------Right way.
    int m=pattern.length();
    for (int i = 0; i <=(n-m); i++)//yhan par chahe m-n karke = to ka symbole lagate chahe = to na laga ke m-n+1 likh sakte the kyuki hume last index chaiye jaha tak hamara i jana chahiye aur wo pattern ke length ko hatta ke hi ayega aur usme agar minus karke nikale to +1 karna padta hai 

    // and agar +1 nhi karana to < ke sath = bhi lagae 
    // logic same 10 -3 =7 ab agar = na lage to 6 tak hi jaeyega  par hame to 7 tak check karna hai kyu ki hame 8 9 10 ko last patter ke liye rkha hai wo ho bhi sakta hai nhi bhi.
    {
    int j;
        for (j = 0; j < m; j++) 
        {
            if (pattern[j]!=txt[i+j])
            {
                break;
            }
        }
        if (j==m)//here checking with m because number of patter length is equal to patter that we are trying to find in txt is give write solution if it is equal than pattern is present.

        {
            cout<<i<<" ";
        }
    }
    
}

int main(){
    string txt = "ABCABCD";string pattern="ABCD";
    cout<<endl;
    cout<<"All index numbers where pattern found:"<<" ";
    print_indexes_where_pattern_matches(txt,pattern);//T.C=O((n-m+1)*m)  Auxilary Space:O(1).  wrost case example is :AAAAAAA=txt and pattern= AAA  so the inner loop will run m times 
    cout<<endl;
    cout<<endl;
    
}