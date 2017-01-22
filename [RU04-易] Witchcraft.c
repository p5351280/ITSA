#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int ncase;
    cin>>ncase;
    while(ncase--){
        long long int desire, count[5], magic[5], i, j, k;
        bool flag=false;
        cin>>desire;
        cin>>count[0]>>count[1]>>count[2]>>magic[0]>>magic[1]>>magic[2];
        for(i=0; i<=count[0] && !flag; i++)
            for(j=0; j<=count[1] && !flag; j++)
                for(k=0; k<=count[2] && !flag; k++)
                    if(desire == i*magic[0] + j*magic[1] + k*magic[2])
                        flag=true;
        if(flag)    cout<<"yes\n";
        else        cout<<"no\n";
    }
}
