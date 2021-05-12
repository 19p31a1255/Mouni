#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,count=0;
	cout<<"enter n value";
	cin>>n;
	m=sqrt(n);
	for(int i=1;i<=m;i++)
	{
		if(n%i==0)
		{
			count+=1;
		}
	}
	if(count<=2)
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not prime";
	}
}
