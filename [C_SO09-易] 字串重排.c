#include<stdio.h>
#include<string.h>

int main(){
    char s[100000];
    while(gets(s)!=NULL){
        int sum[2]={0}, i;
        for(i=0; i<strlen(s); i++)
            sum[s[i]-'0']++;
        for(i=0; i<sum[1]; i++)
            printf("1");
        for(i=0; i<sum[0]; i++)
            printf("0");
        printf("\n");
    }
}