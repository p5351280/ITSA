#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
    int count, sum[26]={0}, i;
    char s[10000];
    scanf("%d", &count);
    for(i=0; i<count; i++)
        scanf(" %c", s+i);
    //scanf("%c", s+count-1);
    for(i=0; i<count; i++)
        if(islower(s[i]))
            sum[s[i]-'a']++;
    for(i=0; i<26; i++)
        if(sum[i])
            printf("%c %d\n", 'a'+i, sum[i]);
    return 0;
}