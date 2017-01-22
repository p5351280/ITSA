#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define MAX 10000
int gcd(int i, int j){
    if(i%j==0)
        return j;
    else
        return gcd(j, i%j);
}
int main(){
    int ncase;
    scanf("%d", &ncase);
    while(ncase--){
        int max=-1, min=99999, n, tmp;
        scanf("%d", &n);
        while(n--){
            scanf("%d", &tmp);
            if(max<tmp)
                max=tmp;
            if(min>tmp)
                min=tmp;
        }
        printf("%d\n", gcd(max, min));
    }
    return 0;
}
