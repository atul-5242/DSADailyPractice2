#include<iostream>
using namespace std;
void all_diviosr(int num){//navie Approch:-
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}
//more efficient_solution:-

void all_divisor_effi(int num)
{
    for (int i = 1; i*i < num; i++)
    {
        if (num%i==0)
        {
            cout<<i<<" ";
            if (num%i!=num)
            {
                cout<<num/i<<" ";
            }
            
        }
    }
    cout<<"\n";
}


//very_effi_solution:-
void very_effi_solution_of_all_divisor_effi(int num)
{
    int i=1;
    for (i = 1; i*i <num; i++)
    {
        if (num%i==0)
        {
            cout<<i<<" ";
        }
    }
    // cout<<'\n'<<i<<endl;
    for ( ; i >=1; i--)
    {
        if (num%i==0)
        {
            cout<<num/i<<" ";
        }
    }
    cout<<"\n";
    //how we can get rid from the output:->
    // at 12 :-> 1 2 3 3 4 6 12  here we get two times 3 we have to do something so that we can get one 3.
}
int main(){
    int i=0,j=0,k=0;
    // all_diviosr(12);
    // all_divisor_effi(12);//this is efficient but not give answer in sorted form .
    very_effi_solution_of_all_divisor_effi(12);//this will give in sorted ordered with same as TC of all_divisor_effi which is T.C=O(squareroot of (n));

}