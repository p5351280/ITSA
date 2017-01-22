#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <queue>
#define N 1000010
using namespace std;
unsigned int book[N];
unsigned int cometime(unsigned int job, unsigned int machine){
    priority_queue<unsigned int, vector<unsigned int>, greater<unsigned int> > times;
    unsigned int i, temp;
    for(i=0; i<machine; i++)
        times.push(0);
    for(i=0; i<job; i++){
        temp=times.top();
        times.pop();
        temp+=book[i];
        times.push(temp);
    }
    for(i=0; i<machine-1; i++)
        times.pop();
    return times.top();
}
int main(void){
    unsigned int job, deadline, sum=0, max=0, temp, down, up, mid, i;
    scanf("%u%u", &job, &deadline);
    for(i=0; i<job; i++){
        scanf("%u", book+i);
        max=(max>book[i])?max:book[i];
        sum+=book[i];
    }
    if(max>deadline){
        printf("-1\n");
        return 0;
    }
    down=sum/deadline;
    up=job;
    while(down<up){
        mid=(up+down)/2;
        temp=cometime(job, mid);
        if(temp<=deadline)
            up=mid;
        else
            down=mid+1;
    }
    printf("%u\n", up);
    return 0;
}
