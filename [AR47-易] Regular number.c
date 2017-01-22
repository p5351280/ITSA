#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
int main(){
    int num;
    scanf("%d", &num);
    while(num!=1){
        if(num%2)   break;
        else    num/=2;
    }
    while(num!=1){
        if(num%3)   break;
        else    num/=3;
    }
    while(num!=1){
        if(num%5)   break;
        else    num/=5;
    }
    if(num!=1)
        printf("Irregular number!\n");
    else
        printf("Regular number!\n");
    return 0;
}
