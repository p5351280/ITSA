#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define N 10010

int main()
{
    int job, machine, n, time[N]={0}, i, j, min, max;
    scanf("%d%d", &job, &machine);
    for(i=0; i<job; i++){
        scanf("%d", &n);
        for(min=0, j=1; j<machine; j++)
            if(time[j]<time[min])   min=j;
        time[min]+=n;
    }
    for(max=0, i=1; i<machine; i++)
        if (time[max]<time[i]) max=i;
    printf("%d\n", time[max]);
}
