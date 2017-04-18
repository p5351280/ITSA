#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
char word[10000][100], str[10000], temp[10000], tem[10000][100],  *token, notalpha[]={" !#$%&'()*+\",-./:;<=>?@[]^_`\\{|}~"};
int flag=0;
int main(){
    int i,j, count[1000]={0}, check;
    while(gets(str)!=NULL){
        token=strtok(str, notalpha);
        while(token!=NULL){
            check=1;
            for(i=0; i<flag; i++){
                for(j=0; j<=strlen(token); j++)
                    temp[j]=tolower(token[j]);   //將token轉換成小寫
                if(!strcmp(temp, tem[i])){      //比較是否有相同
                    count[i]++;
                    token=strtok(NULL, notalpha);
                    check=0;
                }
            }
            if(check){                              //若不相同則新增單字
                strcpy(word[flag], token);
                for(j=0; j<=strlen(word[i]); j++)
                    tem[flag][j]=tolower(word[flag][j]); //將已有的單字轉換成小寫
                count[flag++]++;
                token=strtok(NULL, notalpha);
            }
        }
    }
    for(i=0; i<flag; i++)
        printf("%s : %d\n", word[i], count[i]);
    return 0;
}