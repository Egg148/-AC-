#include<iostream>
using namespace std;
int main()
{
    int a[10],n,s=0;
    for(int i=0;i<10;i++)
        cin>>a[i];
    cin>>n;
    for(int i=0;i<10;i++)
        if(n+30>=a[i])
            s++;
    cout<<s;
    return 0;
}
