#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;
char s[100000];
int main()
{
	char ch;
	int x=0,j=0,y=0,i,ans=0;
	while(cin>>ch&&ch!='E')
		s[j++]=ch;
	s[j++]='E';
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='W')
			x++;
		if(s[i]=='L')
			y++;
		if(s[i]=='E')
		{
			cout<<x<<':'<<y<<endl;
			break;
		}
		if((x>=11||y>=11)&&(abs(x-y)>=2))
		{
			cout<<x<<':'<<y<<endl;
			x=0;
			y=0;
			ans++;
		}
	}
	cout<<endl;
	x=0;
	y=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]=='W')
			x++;
		if(s[i]=='L')
			y++;
		if(s[i]=='E')
		{
			cout<<x<<':'<<y<<endl;
			break;
		}
		if((x>=21||y>=21)&&(abs(x-y)>=2))
		{
			cout<<x<<':'<<y<<endl;
			x=0;
			y=0;
		}
		
	}
	return 0;
}
