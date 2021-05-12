#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=1,num,count=0;
	cout<<"enter the number";
	cin>>num;
	while(i<=num)
	{
		if(num%i==0)
		{
			count+=1;
		}
		i+=1;
	}
	if(count==2)
	{
		cout<<"prime";
	}
	else
	{
		cout<<"not prime";
	}
}
