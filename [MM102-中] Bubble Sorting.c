#include<stdio.h>
int main()
{
    int num[20000], elements, temp, first=0, i, j;
    while (scanf("%d", &elements)==1) {
        if(elements==0)    break;
        if(first)
            printf("\n");
        else
            first=1;
        for(i=0; i<elements; i++)
            scanf("%d", &(num[i]));
        for(i=0; i<elements-1; i++){
            for(j=i+1; j<elements; j++){
                if(num[i]<num[j]){
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        for(i=0; i<elements; i++)
            printf("%d %d\n", i+1, num[i]);
    }
}
