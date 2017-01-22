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


int main(){
    ios::sync_with_stdio(0);
    int ncase;
    while(cin>>ncase && ncase){
        int energy[N][4]={{0}}, i;
        energy[0][0]=1000;
        energy[0][1]=1000;
        for(i=1; i<=ncase; i++) cin>>energy[i][0]>>energy[i][1];
        for(i=1; i<=ncase; i++){
            energy[i][2] = min(abs(energy[i-1][0]-energy[i][0])+energy[i-1][2], abs(energy[i-1][1]-energy[i][0])+energy[i-1][3]);
            energy[i][3] = min(abs(energy[i-1][0]-energy[i][1])+energy[i-1][2], abs(energy[i-1][1]-energy[i][1])+energy[i-1][3]);
        }
        cout<<min(energy[ncase][2], energy[ncase][3])<<endl;
    }
    return 0;
}
