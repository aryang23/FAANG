//Find Majority Element
//Best Method
//In O(N) Space and O(N) Time
//By Aryan Grover(@aryang23)
#include<iostream>
#include<vector>
#define ll long long
using namespace std;
vector<ll> majorityElement(vector<ll> v)
{
    ll e1=v[0];
    ll c1=1;
    ll e2=0;
    ll c2=0;
    for(ll i=1;i<v.size();i++)
    {
        if(v[i]==e1)
        {
            c1++;
        }
        else if(v[i]==e2)
        {
            c2++;
        }
        else if(c1==0)
        {
            e1=v[i];
            c1=1;
        }
        else if(c2==0)
        {
            e2=v[i];
            c2=1;
        }
        else
        {
            c1--;
            c2--;
        }
    }
    //Second Iteration for Checking
    c1=0; c2=0;
    for(ll i=0;i<v.size();i++)
    {
        if(v[i]==e1)
        c1++;
        else if(v[i]==e2)
        c2++;
    }
    vector<ll> ans;
    if(c1>(v.size()/3))
    {
        ans.push_back(e1);
    }
    if(c2>(v.size()/3))
    {
        ans.push_back(e2);
    }
    return ans;
}
int main()
{
    vector<ll> v;
    ll x;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    vector<ll> anss=majorityElement(v);
    if(anss.size())
    {
        for(ll i=0;i<anss.size();i++)
        {
            cout<<anss[i]<<" ";
        }
    }
    else
    cout<<"No Majority Elements";
}
