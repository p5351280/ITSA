#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#define N 10010
using namespace std;
int main()
{
    int spies, lead[N]={0}, mark[N]={0}, ans=0, i;
    cin>>spies;
    for(i=1; i<spies; i++)    cin>>lead[i];
    for(i=spies-1; i>0; i--){
        if(!mark[i])
            mark[lead[i]]=1;
        else
            ans++;
    }
    ans+=mark[0];
    cout<<ans<<endl;
    return 0;
}
