#include <stdio.h>
int main(){
    double a;
    while(scanf("%lf", &a)==1){
        printf("Fahrenheit = %.2lf\n", a*((double)9/(double)5)+32);
        printf("Absolute temperature = %.2lf\n", a+273.15);
    }
    return 0;
}
