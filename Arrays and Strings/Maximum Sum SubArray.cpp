//Maximum Sum SubArray
//By Aryan Grover(@aryang23)
#include<iostream>
#include<climits>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ll csum=0,msum=INT_MIN;
		for(ll i=0;i<n;i++)
		{
			csum+=a[i];
			if(csum<0)
			csum=0;
			msum=max(msum,csum);
		}
		cout<<msum<<endl;
	}
}
