#include <stdio.h>

int main(){
    int count[3010]={0}, num[3010], absolute, len, flag=0, i;
    scanf("%d", &len);
    for(i=0; i<len; i++)
        scanf("%d", num+i);
    for(i=0; i<len-1; i++){
        absolute=(num[i]>num[i+1]) ? num[i]-num[i+1] : num[i+1]-num[i];
        if(absolute<len)
            count[absolute]++;
        else
            break;
    }
    for(i=1; i<len; i++){
        if(count[i]==0){
            flag=1;
            break;
        }
    }
    if(flag)
        printf("Not jolly\n");
    else
        printf("Jolly\n");
    return 0;
}
