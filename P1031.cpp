#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdio>
#include<queue>
#include<stack>
using namespace std;
int a[105],s,n,ans;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		ans+=a[i];
	}
	ans=ans/n;
	for(int i=0;i<n;i++)
	{
		if(a[i]!=ans)
		{
			s++;
			if(a[i]>ans)
				a[i+1]=a[i+1]+a[i]-ans;
			else
				a[i+1]=a[i+1]-(ans-a[i]);
		}
	}
	cout<<s;
 	return 0;
}

