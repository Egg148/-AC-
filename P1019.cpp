#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<string>
#include<cstdio>
#include<queue>
#include<stack>
using namespace std;
struct node
{
	string s;
}a[25];
bool v[25];
string c;
int n,maxn,vv[25];
void dfs(int ans,string q,int step)
{
	if(ans>maxn)
		maxn=ans;
	for(int i=0;i<n;i++)
	{
		if(vv[i]!=2)
		{
			for(int j=0;j<min(q.size(),a[i].s.size());j++)
			{
				if(q[q.size()-j-1]==a[i].s[j])
				{
//					cout<<"ans="<<ans<<" q="<<q<<" a[i].s="<<a[i].s<<" step="<<step<<" a[i].s.size()="<<a[i].s.size()<<endl;
					v[i]=true;
					vv[i]++;
					dfs(ans+a[i].s.size()-1-j,a[i].s,step+1);
					vv[i]--;
					v[i]=false;
					break;
				}
			}
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i].s;
	cin>>c;
	dfs(0,c,0);
	cout<<maxn+1;
 	return 0;
}

