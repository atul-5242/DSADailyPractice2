#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


// Navie Approch:--------------------------------------------------
// ----------------------------------------------------------------
bool isAnagram(string &str1,string &str2){
   //---------------------- 
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1 != n2) 
        return false; //these n1!=n2 make program more efficient.  
   //---------------------- 
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if (str1==str2)
        return true;
    else
        return false;
}
// ----------------------------------------------------------------


// ------------------------Efficient Approch :----------------------------

const int Char=256;
bool is_Anagram(string str1,string str2){
    int n1 = s1.length(); 
    int n2 = s2.length(); 
    if (n1 != n2) 
        return false; 
    int count[Char]={0};
    for (int i = 0; i < n1; i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;//VERY Excellent LOGIC.
    }
    for (int i = 0; i < n1; i++)
    {
    if (count[i]!=0)
        return false;
    else
        return true;
    }
}


// ----------------------------------------------------------------

int main(){
    string str1="Hello",str2="lloHe";
    cout<<boolalpha<<isAnagram(str1,str2)<<endl;
}