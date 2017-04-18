#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int count;
    char s[20];
    scanf("%d", &count);
    while(count--){
        int sum=0, i, j, len;
        for(j=0; j<2; j++){
            long num=0, temp[20];
            scanf("%s", s);
            len=strlen(s);
            for(i=0; i<len; i++)
                temp[i]=s[i]-'0';
            for(i=0; i<len; i++)
                num|=(temp[i]<<(len-1-i));
            sum+=num;
        }
        printf("%d\n", sum);
    }
    return 0;
}