#include <stdio.h>
#include <string.h>
int main(){
    int num, cmp, count=0;
    scanf("%d%d", &cmp, &num);
    while(num>9){
        if(num%100==cmp)
            count++;
        num/=10;
    }
    printf("%d\n", count);
    return 0;
}