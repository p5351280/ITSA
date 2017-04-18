#include <stdio.h>

unsigned rev(unsigned);

int main(){
    int t;
    unsigned int num;
    while(scanf("%u", &num)!=EOF){
        if(num!=rev(num))
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

unsigned rev(unsigned num){
    unsigned int reverse=0;
    while(num){
        reverse *= 10;
        reverse += num%10;
        num/=10;
    }
    return reverse;
}