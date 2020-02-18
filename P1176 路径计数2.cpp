#include<iostream>
#include<cstring>
using namespace std;
int n,m,x,y,a[1005][1005];
bool k[1005][1005];
int main()
{
    memset(a,0,sizeof(a));
    memset(k,false,sizeof(k));
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x>>y;
        k[x][y]=true;
    }
    a[1][0]=1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(!k[i][j])
                a[i][j]=(a[i-1][j]+a[i][j-1])%100003;
            else
                a[i][j]=0;
    cout<<a[n][n];
    return 0;
}
