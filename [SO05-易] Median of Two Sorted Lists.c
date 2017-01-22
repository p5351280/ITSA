#include <stdio.h>
#define MAX 100000
int main(int argc, const char * argv[]) {
    int A[MAX], B[MAX], C[2*MAX], num_A, num_B, i, count, x, y, z, ncase; //num_A  A陣列大小，num_B  B陣列大小
    scanf("%d", &ncase);
    while(ncase--){
        x = 0;
        y = 0;
        z = 0;
        count = 0;   //x,y,z分別紀錄 A,B 比較到哪，C存到哪
        scanf("%d", &num_A);
        num_B = num_A;
        //輸入兩陣列
        for(i=0;i<num_A;i++)
            scanf("%d", &A[i]);
        for(i=0;i<num_B;i++)
            scanf("%d", &B[i]);
        
        //x和y皆不能超過該陣列個數
        while(x < num_A  &&  y < num_B){
            if(A[x] <= B[y])
                C[z++] = A[x++];
            else
                C[z++] = B[y++];
            count++;
        }
        
        //剩餘直接放入C陣列
        if(x == num_A)
            while(y < num_B)
                C[z++] = B[y++];
        else
            while(x < num_A)
                C[z++] = A[x++];
        printf("%d\n", C[num_A-1]);
    }
    return 0;
}
