#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,count=0;
	cout<<"enter the number";
	cin>>num;
	for(int i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			count+=1;
		}
		i+=1;
	}
	if(count==0)
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not prime";
	}
}
