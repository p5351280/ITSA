#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <algorithm>
#include <queue>
#include <vector>
#include <cmath>
using namespace std;
#define N 7000
#define swap(a,b) {a^=b, b^=a, a^=b;}

typedef struct{
    int l, r;
}Line;

int cmp(const void* a, const void* b){
    return ((Line*)a)->l - ((Line*)b)->l;
}
int main(){
    ios::sync_with_stdio(0);
    int ncase;
    scanf("%d", &ncase);
    while(ncase--){
        int left=0, right=0, ans=0, i=0, n, last;
        Line a[N];
        scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%d%d", &(a[i].l), &(a[i].r));
            if(a[i].l>a[i].r)   swap(a[i].l, a[i].r);
        }
        qsort(a, i, sizeof(Line), cmp);
        i=0;
        last=0;
        while(left<200){
            if(a[i].l>left){
                ans=0;
                break;
            }
            for(; a[i].l<=left; i++){
                if(a[i].r>right)
                    right=a[i].r;
            }
            left=right+1;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
