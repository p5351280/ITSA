#include <iostream>


using namespace std;
int main(){
    //freopen("/Users/Shuo-En/Desktop/test.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int m, n, a[110][110], i, j;
        cin>>m>>n;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                cin>>a[i][j];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(i==0&&j==0){ //左上角
                    if(a[i][j]&&(!a[i+1][j]||!a[i][j+1]))
                        cout<<"0 ";
                    else
                        cout<<"_ ";
                }
                else if(i==0&&j==n-1){  //右上角
                    if(a[i][j]&&(!a[i+1][j]||!a[i][j-1]))
                        cout<<"0 ";
                    else
                        cout<<"_ ";
                }
                else if(i==m-1&&j==0){  //左下角
                    if(a[i][j]&&(!a[i-1][j]||!a[i][j+1]))
                        cout<<"0 ";
                    else
                        cout<<"_ ";
                }
                
                else if(i==m-1&&j==n-1){    //右下角
                    if(a[i][j]&&(!a[i-1][j]||!a[i][j-1]))
                        cout<<"0 ";
                    else
                        cout<<"_ ";
                }
                else if(i==0){
                    if(a[i][j]&&(!a[i+1][j]||!a[i][j-1]||!a[i][j+1]))
                        cout<<"0 ";
                    else
                        cout<<"_ ";
                }
                else if(j==0){
                    if(a[i][j]&&(!a[i-1][j]||!a[i+1][j]||!a[i][j+1]))
                        cout<<"0 ";
                    else
                        cout<<"_ ";
                    
                }
                else if(i==m-1){
                    if(a[i][j]&&(!a[i-1][j]||!a[i][j-1]||!a[i][j+1]))
                        cout<<"0 ";
                    else
                        cout<<"_ ";
                }
                else if(j==n-1){
                    if(a[i][j]&&(!a[i-1][j]||!a[i+1][j]||!a[i][j-1]))
                        cout<<"0 ";
                    else
                        cout<<"_ ";
                }
                else{
                    if(a[i][j]&&(!a[i-1][j]||!a[i+1][j]||!a[i][j-1]||!a[i][j+1]))
                        cout<<"0 ";
                    else
                        cout<<"_ ";
                }
            }
            cout<<endl;
        }
        if(t)
            cout<<endl;
    }
    
    
    return 0;
}