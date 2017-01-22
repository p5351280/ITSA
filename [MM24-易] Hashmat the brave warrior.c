#include <stdio.h>
int main(void){
    long a,b;
    while(scanf("%ld%ld", &a, &b) == 2)
        printf("%ld\n", a-b>0?a-b:b-a);
    return 0;
}
