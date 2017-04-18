#include <stdio.h>
#include <math.h>
int main()
{
    char id[10000];
    
    while(scanf("%s", id)!=EOF){
        int check = 0, id_int[10000], i, count=0;
        switch (id[count*10+0]){
            case 'A':
                check+=1;
                break;
            case 'B':
                check+=10;
                break;
            case 'C':
                check+=19;
                break;
            case 'D':
                check+=28;
                break;
            case 'E':
                check+=37;
                break;
            case 'F':
                check+=46;
                break;
            case 'G':
                check+=55;
                break;
            case 'H':
                check+=64;
                break;
            case 'I':
                check+=39;
                break;
            case 'J':
                check+=73;
                break;
            case 'K':
                check+=82;
                break;
            case 'L':
                check+=2;
                break;
            case 'M':
                check+=11;
                break;
            case 'N':
                check+=20;
                break;
            case 'O':
                check+=48;
                break;
            case 'P':
                check+=29;
                break;
            case 'Q':
                check+=38;
                break;
            case 'R':
                check+=47;
                break;
            case 'S':
                check+=56;
                break;
            case 'T':
                check+=65;
                break;
            case 'U':
                check+=74;
                break;
            case 'V':
                check+=83;
                break;
            case 'W':
                check+=21;
                break;
            case 'X':
                check+=3;
                break;
            case 'Y':
                check+=12;
                break;
            case 'Z':
                check+=30;
                break;
        }
        for (i=count*10 + 1; i < count*10 + 9; i++){
            id_int[count*10 + i] = id[count*10 + i]-'0';
            check=check+(id_int[i] * (count*10 + 9-i));
        }
        
        id_int[count*10+9] = id[count*10+9]-'0';
        check+=id_int[count*10+9];
        if(check%10==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
}