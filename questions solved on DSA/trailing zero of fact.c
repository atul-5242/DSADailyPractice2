#include<stdio.h>

int trailing_zero(int num);
int trailing_zero_offact(int num);
int trailing_zero_offact(int num){
    int fact=1;
    for (int i = 2; i <= num; i++)
    {
    fact=fact*i;
    }
    int z=trailing_zero(fact);
    return z;

}
int trailing_zero(int num){
    int r=0;
    int cnt=0;
    while(num%10==0){
        r=r%10;
        num=num/10;
        if (r==0){
            cnt++;
        }
        else{
        return -1;
        }
    }
    return cnt;
    
}
int main(){
    printf("%d",trailing_zero(100020));
    printf("This:");
	printf("%d",trailing_zero_offact(20));
}
