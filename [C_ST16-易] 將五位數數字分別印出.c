#include <stdio.h>
#include <string.h>
int main(){
    int num, ans[5], i;
    while(scanf("%d", &num)!=EOF){
        for(i=0; i<5; i++){
            ans[i]=num%10;
            num/=10;
        }
        for(i=4; i>=0; i--){
            printf("%d", ans[i]);
            if(i)   printf("   ");
            else    printf("\n");
        }
    }
    return 0;
}