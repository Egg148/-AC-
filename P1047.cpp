#include<iostream>
using namespace std;
bool l[10005];
int main()
{
    int L,n,a,b,s=0;
    cin>>L>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        for(int j=a;j<=b;j++)
            l[j]=true;
    }
    for(int i=0;i<=L;i++)
        if(l[i]==false)
            s++;
    cout<<s;
    return 0;
}
