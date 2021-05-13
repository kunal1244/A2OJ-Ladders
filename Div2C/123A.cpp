#include<bits/stdc++.h>
using namespace std;
#define    ll    long long int
#define M 1005
char s[M],ans[M];
ll c[M],f[M],i,j,x,id=-1,p,n;
int main()
{
	cin>>s;
    n=strlen(s);
	for(i=0;i<n;i++)
	{
		c[s[i]]++;
	}
	for(i=2;i*2<=n;i++)
	{
		for(j=i;j<=n;j+=i)
		{
			f[j]=1;
		}
	}
	for(i=1;i<=n;i++)
	{
		x+=f[i];
	}
	id=-1;
	for(i='a';i<='z';i++)
	{
		if(c[i]>=x) id=i;
	}
	if(id==-1)
	{
		cout<<"NO";
		return 0;
	}
	for(i=1;i<=n;i++)
	{
		if(f[i]) ans[i-1]=id;
	}
	c[id]-=x;
	p='a';
	for(i=1;i<=n;i++)
	{
		if(!f[i])
		{
			while(!c[p]) p++;
			ans[i-1]=p;
			c[p]--;
		}
	}
	cout<<"YES"<<endl;
	cout<<ans;
	return 0;
}