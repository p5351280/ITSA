#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define MAX 100

int priority(char s){
    switch(s){
        case '+':
        case '-':
            return 1;
            break;
        case '*':
        case '/':
            return 2;
            break;
    }
    return 0;
}

int main(){
    int top, i;
    char stack[MAX], s[MAX];
    while(scanf("%s", s) == 1){
        top = -1;
        for(i=0; i<strlen(s); i++){
            if(s[i] == '(')
                stack[++top] = s[i];
            else if(s[i] == ')'){
                while(stack[top] != '(')
                    printf("%c", stack[top--]);
                top--;
            }
            else if(isalpha(s[i]) || isdigit(s[i]))
                printf("%c", s[i]);
            else if(s[i] == '#')    break;
            else{
                if(priority(s[i]) > priority(stack[top]))
                    stack[++top] = s[i];
                else{
                    while(priority(s[i]) <= stack[top])
                        printf("%c", stack[top--]);
                    stack[++top] = s[i];
                }
            }
        }
        for(i=top; i>-1; i--)   printf("%c", stack[i]);
        printf("\n");
    }
    return 0;
}
