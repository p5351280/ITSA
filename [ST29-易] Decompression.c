#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char word[1050];
    while(scanf("%s", word)!=EOF){
        int  count, i, flag_num=0, flag_new=0;
        char new[1050], num[10];
        for(i=0; i<strlen(word); i++){
            if(word[i]>='0' && word[i]<='9'){
                num[flag_num++]=word[i];
                num[flag_num]='\0';
            }
            else{
                new[flag_new++]=word[i];
                new[flag_new]='\0';
                if((word[i+1]>='0' && word[i+1]<='9') || word[i+1]=='\0'){
                    count = atoi(num);
                    while(count--)
                        printf("%s", new);
                    flag_num=flag_new=0;
                }
            }
        }
        printf("\n");
    }
    return 0;
}