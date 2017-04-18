#include <stdio.h>
#include <string.h>
int len1, len2;

void conn(char s1[], char s2[]){
    int m, i;
    m=(len1<len2) ? len1 : len2;
    for(i=m; i>=0; i--){
        if(strncmp(s1+len1-i, s2, i)==0){
            while(i<len2)
                s1[len1++]=s2[i++];
            s1[len1]=0;
            break;
        }
    }
}
int main(){
    int num;
    char s1[100000], s2[100000];
    scanf("%d", &num);
    scanf("%s", s1);
    len1=strlen(s1);
    num--;
    while(num--){
        scanf("%s", s2);
        len2=strlen(s2);
        if(len2>100)
            printf("ERROR");
        conn(s1, s2);
    }
    printf("%s\n", s1);
    return 0;
}