#include<iostream>
using namespace std;
int main()
{
	int n,pos;
	cin>>n;
	cin>>pos;
	int res;
	res=n^((pos-1)<<1);
	cout<<res;
}
