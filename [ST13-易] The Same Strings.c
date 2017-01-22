#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define MAX 10000

int main(){
    char s[MAX], a[MAX];
    int count[30]={0}, tmp[30]={0}, ncase, ans, i;
    scanf("%s", s);
    for(i=0; i<strlen(s); i++){
        if(isupper(s[i]))
            count[s[i]-'A']++;
        else
            count[s[i]-'a']++;
    }
    scanf("%d", &ncase);
    while(ncase--){
        ans=1;
        scanf("%s", a);
        for(i=0; i<26; i++)
            tmp[i]=count[i];
        for(i=0; i<strlen(a); i++){
            if(isupper(a[i]))
                tmp[a[i]-'A']--;
            else
                tmp[a[i]-'a']--;
        }
        for(i=0; i<26; i++)
            if(tmp[i])
                ans=0;
        if(ans)
            printf("%s\n", a);
    }
    
    return 0;
}
