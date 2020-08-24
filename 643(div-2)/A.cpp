#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mind(ll a)
{
    ll k=9;
    while(a)
    {
        k = min(k,a%10);
        a = a/10;
    }
    return k;
}
ll maxd(ll a)
{
    ll k=0;
    while(a)
    {
        k = max(k,a%10);
        a = a/10;
    }
    return k;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        // ll a,k;
        // cin>>a>>k;
        //string a;
        ll a;
        ll k;
        cin>>a;
        cin>>k;
        ll minm = 9;
        while(k>1 && minm!=0)
        {
            ll maxm = maxd(a);
            minm = mind(a);
            a = a + maxm*minm;
            k--;
        }
        cout<<a<<endl;
    }
    return 0;
}