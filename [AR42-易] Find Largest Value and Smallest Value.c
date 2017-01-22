#include <stdio.h>
int main(){
    int num, max=-1, min=999, i;
    for(i=0; i<10; i++){
        scanf("%d", &num);
        if(num>max) max=num;
        if(num<min) min=num;
    }
    printf("Largest number = %d\n", max);
    printf("Smallest number = %d\n", min);
    return 0;
}
