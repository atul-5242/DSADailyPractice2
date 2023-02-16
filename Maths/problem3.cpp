// #include<iostream>
// #include<vector>
// #include<cmath>
#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
    vector<int> quadratic_solution(int a,int b,int c){
        vector<int>v;
        int y1,y2,temp1,temp2;
             y1=((-b)+sqrt(b*b-(4*a*c)))/2*a;
             y2=((-b)-sqrt(b*b-(4*a*c)))/2*a;
        if(y1>y2){
            temp1=y1;
            temp2=y2;
        }
        else{
            temp2=y1;
            temp1=y2;
            
        }
        v={temp1,temp2};
        return v;
    }
};
int main(){
    int i=0,j=0,k=0;
    cout<<sqrt(16)<<endl;
     cout<<floor(112.87)<<endl;
     cout<<ceil(112.87)<<endl;


}