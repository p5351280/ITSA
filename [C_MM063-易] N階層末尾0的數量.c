#include <stdio.h>
#include <string.h>
#define MAX_num 1000
#define MAX_len 3000

int ans[1010][3000];
void cacl();
void big_mul(int*, int*, int);
void put(int);


int main(){
    int n, i;
    cacl();
    while(scanf("%d", &n)!=EOF){
        int count=0;
        for(i=0; ans[n][i]==0; i++)
            count++;
        printf("%d\n", count);
    }
    return 0;
}
void cacl(){
    int i, j;
    for(i=0; i<=MAX_num; i++)
        for(j=0; j<MAX_len; j++)
            ans[i][j]=0;
    ans[0][0]=1;
    ans[1][0]=1;
    for(i=2; i<=MAX_num; i++)
        big_mul(ans[i], ans[i-1], i);
}
void big_mul(int *ans, int *num, int x){
    int i, temp=0;
    for(i=0; i<MAX_len; i++){
        ans[i]+=num[i]*x+temp;
        temp=ans[i]/10;
        ans[i]%=10;
    }
}