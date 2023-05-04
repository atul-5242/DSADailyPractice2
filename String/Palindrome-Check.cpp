#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
// Navie Approch:->
bool isPalindrome_Navie(string str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    return (rev==str);
}
// Efficient Approch:->

int isPalindrome(string str){
    int left=0,right=str.length()-1;
    int status=0;
    while (left<=right)
    {
        if (str[left]==str[right])
        {            
            left++;right--;
            status=1;
        }
        else{
            status=0;
            break;
        }
    }
    return status;
    
}

int main(){
    isPalindrome("AA")?cout<<"Yaa It is Palindrome."<<endl:cout<<"It is not a Palindrome."<<endl;
    isPalindrome_Navie("AAp")?cout<<"Yaa It is Palindrome."<<endl:cout<<"It is not a Palindrome."<<endl;

}