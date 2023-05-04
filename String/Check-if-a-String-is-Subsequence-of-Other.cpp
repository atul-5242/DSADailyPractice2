#include<iostream>
using namespace std;

// ITTERATIVE :
bool Subsequence_(string &str1,string &str2,int n1,int n2){
    bool status=false;
    if (n1==0)
        return false;
    int i=0,j=0;
    while (i<n1 &&j<n2){
        if (str1[i]==str2[j++])
            status=true;
        i++;
    }
    if (j==n2)
        status=true;
    else
        status=false;
    return status;
}

// Recursive :

bool Subsequence_Recursive(string &str1,string &str2,int n,int m){

    if (m==0)
        return true;
    if (n==0)
        return false;
    if (str1[n]==str2[m])
        return Subsequence_Recursive(str1,str2,n-1,m-1);
    else
        return Subsequence_Recursive(str1,str2,n-1,m);
}
int main() {
	string s1="abaa";//<-String
    string s2="baaa";//<-Subsequence pattern 
	int n=s1.length()-1,m=s2.length()-1;  //yaa its right.
// ------------------------------------------
	cout<<boolalpha<<Subsequence_Recursive(s1,s2, n, m);//Time Complexity : O(m+n)
    // Space Complexity :O(m+n)
// ------------------------------------------
	
	return 0;
}
    
