#include <stdio.h>
#include <stdlib.h>

int main()
{
    long num;
    char x[100];
    char *temp;
    gets(x);
    while(gets(x)!=NULL){
        long sum=0;
        temp=x;
        while(*temp){
            num=strtol(temp, &temp, 2);
            sum+=num;
        }
        printf("%ld\n", sum);
    }
    return 0;
}
