#include<stdio.h>
#include<string.h>
int paln(char str[],int start,int end){
//	if (str[start]!=str[end])
	if (start>=end){
		return 1;
	}
	
	return ((str[start]==str[end]) && paln(str,(start+1),(end-1)));
}
int main(){
	char str[50]={"HelleH"};
	char str2[50]={"HelleH"};
	printf("%d\n",strlen(str)==strlen(str2));
//	printf("%d\n",strlen(str));
	printf("%d",paln(str,0,strlen(str)-1));
}											
