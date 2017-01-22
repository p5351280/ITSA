#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#define N 5100
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int ncase;
    while(cin>>ncase && ncase){
        int i, with[N]={0}, without[N]={0}, big[N]={0}, value[N];
        for(i=0; i<ncase; i++)  cin>>value[i];
        with[0] = value[0];
        without[0] = 0;
        big[0] = value[0];
        for(i=1; i<ncase; i++){
            with[i] = value[i] + without[i-1];
            without[i] = big[i-1];
            big[i] = max(with[i], without[i]);
        }
        cout<<big[ncase-1]<<endl;
    }
    return 0;
}
