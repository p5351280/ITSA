#include <stdio.h>
#include <string.h>

void rev(char *s, int len){
    int i;
    char temp;
    for(i=0; i<len/2; i++){
        temp=s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=temp;
    }
}
int main(){
    int ncase;
    scanf("%d", &ncase);
    while(ncase--){
        char n1[1000], n2[1000];
        int num1[1000]={0}, num2[1000]={0}, ans[1000]={0}, len1, len2, len3, i;
        scanf("%s",n1);
        len1=strlen(n1);
        scanf("%s",n2);
        len2=strlen(n2);
        len3=(len2>len1)?len2:len1;
        rev(n1, len1);
        rev(n2, len2);
        for(i=0; i<len1; i++)
            num1[i]=n1[i]-'0';
        for(i=0; i<len2; i++)
            num2[i]=n2[i]-'0';
        for(i=0; i<len3; i++){
            ans[i]+=num1[i]+num2[i];
            if(ans[i]/10){
                ans[i+1]+=ans[i]/10;
                ans[i]%=10;
            }
        }
        if(ans[len3])
            printf("%d",ans[len3]);
        for(i=len3-1; i>=0; i--)
            printf("%d", ans[i]);
        printf("\n");
    }
    return 0;
}