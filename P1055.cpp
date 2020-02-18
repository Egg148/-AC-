#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int ans;
    cin>>s;
    ans=s[0]-'0'+(s[2]-'0')*2+(s[3]-'0')*3+(s[4]-'0')*4+(s[6]-'0')*5+(s[7]-'0')*6+(s[8]-'0')*7+(s[9]-'0')*8+(s[10]-'0')*9;
    if(s[s.size()-1]=='X')
    	if(ans%11==10)
    		cout<<"Right";
    	else
    	{
        	for(int i=0;i<s.size()-1;i++)
            	cout<<s[i];
       		cout<<ans%11;
       }
    else
    	if(ans%11==s[s.size()-1]-'0')
    		cout<<"Right";
    	else
    	{
    		for(int i=0;i<s.size()-1;i++)
            	cout<<s[i];
            if(ans%11==10)
            	cout<<'X';
            else
            	cout<<ans%11;
		}
    return 0;
}
