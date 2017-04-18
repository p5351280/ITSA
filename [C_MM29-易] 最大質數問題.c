#include <stdio.h>
int prime[50000]={0};    //質數表
int mark[4634100]={0};   //儲存此數是否為質數; 0 prime, 1 not prime
void make(){
    int i, j, count=1;
    for(i=4;i<=4634000;i+=2)  //2的倍數皆非質數
        mark[i]=1;
    prime[0]=2;  //第一個質數是2
    for(i=3; i<=4634000; i+=2){
        if(!mark[i]){    //若i是質數才執行
            prime[count++] = i; //將i放入質數表
            for(j=2; i*j<=4634000; j++)    //將i的倍數數字標記為非質數
                mark[i*j] = 1;
        }
    }
}
int main(){
    int num, i;
    make();
    while((scanf("%d", &num))!=EOF){
        for(i=0; i<50000; i++){
            if(prime[i]<num)
                continue;
            else{
                printf("%d\n", prime[i-1]);
                break;
            }
        }
    }
    return 0;
}