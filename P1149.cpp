#include<iostream>
using namespace std;
int v[10]={6,2,5,5,4,5,6,3,7,6},s[2001]={6};
int main()
{
    int n,k,ans=0;
    cin>>n;
    for(int i=1;i<=2001;i++)
    {
        k=i;
        while(k>0)
        {
            s[i]=s[i]+v[k%10];
            k=k/10;
        }
    }
    for(int i=0;i<=1000;i++)
        for(int j=0;j<=1000;j++)
            if(s[i]+s[j]+s[i+j]+4==n)
                ans++;
    cout<<ans;
    return 0;
}
