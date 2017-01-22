//404410053_poly(ar02)

#include <stdio.h>
int main(){
    int coef[3];
    while(scanf("%d%d%d", coef+2, coef+1, coef)==3){
        int temp[100000], ans[100000], times, highest, i, j, k;
        scanf("%d", &times);
        temp[0]=1;
        highest=0;
        for(i=0; i<times; i++){ //共要相乘times次
            for(j=0; j<=highest+2; j++)
                ans[j]=0;   //乘完一輪的答案
            for(j=0; j<=highest; j++)   //temp
                for(k=0; k<3; k++)  //coef
                    ans[j+k] += temp[j]*coef[k];    // []代表幾次方
            for(j=0; j<=highest+2; j++)
                temp[j]=ans[j]; //將這輪的答案存到temp，以便下次繼續相乘
            highest+=2;
        }
        for(i=highest; i>=0; i--){
            printf("%d", ans[i]);
            if(i)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
