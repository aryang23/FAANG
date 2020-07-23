//Sunny Buildings
//By Aryan Grover(@aryang23)

#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,no,ans=0,maxh=INT_MIN;
		cin>>n;
	//	int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>no;
			if(no>=maxh)
			{
				ans++;
			}
			maxh=max(no,maxh);
		}
		cout<<ans<<endl;
	}
}
