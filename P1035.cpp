#include<iostream>
using namespace std;
int main()
{
    int i=1;
    double s=0,k;
    cin>>k;
    while(s<=k)
    {
        s=s+1.0/i;
        i++;
    }
    cout<<i-1;
    return 0;
}
