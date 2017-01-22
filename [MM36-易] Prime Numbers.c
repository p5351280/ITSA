#include <stdio.h>

int prime[5000]={0};    //質數表
int mark[46341]={0};   //儲存此數是否為質數; 0 prime, 1 not prime

//製作質數表
void make(){
    int i, j, count=1;
    for(i=4; i<=46340; i+=2)  //2的倍數皆非質數
        mark[i]=1;
    prime[0]=2;  //第一個質數是2
    for(i=3; i<=46340; i+=2){
        if(!mark[i]){    //若i是質數才執行
            prime[count++] = i; //將i放入質數表
            for(j=2; i*j<=46340; j++)    //將i的倍數數字標記為非質數
                mark[i*j] = 1;
        }
    }
}

//檢查是否為質數
int check(int num){
    int i;
    if(num<=46340)
        return mark[num];
    else if(num%2==0)
        return 1;
    else if(num%3==0)
        return 1;
    //其餘透過質數表判斷
    else{
        for(i=0; prime[i]*prime[i]<=num && prime[i]!=0; i++){
            if(num % prime[i] == 0)
                return 1;
        }
        return 0;
    }
}

int main(){
    int num;
    make();
    while((scanf("%d", &num))&&num){
        int i, ans=0;
        for(i=2; i<num; i++){
            if(!check(i))
                ans++;
        }
        printf("%d\n", ans);
    }
    return 0;
}
