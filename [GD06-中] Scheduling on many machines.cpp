#include <cstdio>
#include <queue>
#define N 10010
using namespace std;


int main()
{
    int job, machine, n, i, temp;
    priority_queue<int, vector<int>, greater<int> > time;
    scanf("%d%d", &job, &machine);
    for(i=0; i<machine; i++)
        time.push(0);
    for(i=0; i<job; i++){
        scanf("%d", &n);
        temp=time.top();
        time.pop();
        temp+=n;
        time.push(temp);
    }
    for(i=0; i<machine-1; i++)
        time.pop();
    printf("%d\n", time.top());
    return 0;
}
