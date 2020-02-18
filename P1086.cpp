#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdio>
#include<queue>
#include<stack>
using namespace std;
int n,m,s,e,k,ans;
struct node
{
	int xx;
	int yy;
	int w;
}a[405];
bool cmp(node xxx,node yyy)
{
	if(xxx.w>yyy.w)
		return true;
	else
		return false;
}
int main()
{
	cin>>n>>m>>s;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
		{
			cin>>e;
			if(e!=0)
			{
				a[k].xx=i;
				a[k].yy=j;
				a[k++].w=e;
			}
		}
	sort(a,a+k,cmp);
	for(int i=0;i<k;i++)
	{
		if(i==0)
		{
			if(a[i].xx*2+1<=s)
			{
				ans=ans+a[i].w;
				s=s-a[i].xx-1;
			}
			else
				break;
		}
		else
		{
			if((abs(a[i].xx-a[i-1].xx)+abs(a[i].yy-a[i-1].yy))+1+a[i].xx<=s)
			{
				ans=ans+a[i].w;
				s=s-(abs(a[i].xx-a[i-1].xx)+abs(a[i].yy-a[i-1].yy))-1;
			}
			else
				break;
		}
	}
	cout<<ans;
 	return 0;
}

