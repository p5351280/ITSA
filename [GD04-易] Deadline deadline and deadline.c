#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 100110

typedef struct work{
    int time;
    int deadline;
}Work;

int cmp(const void* a, const void* b){
    return ((Work*)a)->deadline - ((Work*)b)->deadline;
}

int main()
{
    int ncase;
    scanf("%d", &ncase);
    while(ncase--){
        Work w[N];
        int num, sum=0, i;
        scanf("%d", &num);
        for(i=0; i<num; i++)
            scanf("%d", &(w[i].time));
        for(i=0; i<num; i++)
            scanf("%d", &(w[i].deadline));
        qsort(w, num, sizeof(Work), cmp);
        for(i=0; i<num; i++){
            sum+=w[i].time;
            if(sum>w[i].deadline)
                break;
        }
        if(i==num)
            printf("Yes\n");
        else
            printf("No\n");
    }
}
