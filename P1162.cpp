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
	int x;
	int y;
};
queue <node> q;
char a[35][35];
int n,r,w,xx[4]={1,-1,0,0},yy[4]={0,0,1,-1};
bool flag,v[35][35];
void bfs(int x,int y)
{
	node e;
	e.x=x;
	e.y=y;
	q.push(e);
	while(!q.empty())
	{
		node k=q.front();
		q.pop();
		if(v[k.x][k.y])
			continue;
		a[k.x][k.y]='2';
		v[k.x][k.y]=true;
		for(int i=0;i<4;i++)
		{
			if(k.x+xx[i]>=1&&k.x+xx[i]<=n&&k.y+yy[i]>=1&&k.y+yy[i]<=n)
			{
				if(!v[k.x+xx[i]][k.y+yy[i]])
				{
					k.x+=xx[i];
					k.y+=yy[i];
					q.push(k);
					k.x-=xx[i];
					k.y-=yy[i];
				}
			}
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='1')
			{
				v[i][j]=true;
				if(!flag)
				{
					flag=true;
					r=i;
					w=j;
				}
			}
		}
	bfs(++r,++w);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<' ';
		cout<<endl;
	}
 	return 0;
}

