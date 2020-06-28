#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>>n>>k;
        // vector<ll> a(n);
        map<ll,ll> mp;
        ll count = 0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%k)
            mp[x%k]++;
            if(x%k != 0)
                count = max(count,mp[x%k]);
        }
        x=0;
        ll p=k;
        if(count!=0){
            for(auto x:mp)
            {
                if(x.second==count)
                {    p = x.first;
                    break;
                }
            }
        }
        
        // cout<<count<<" "<<p<<" ";
        // if(count==1)
        //     cout<<2*k+p
        if(count!=0)
        cout<<k-p+1 + (count-1)*k<<endl;
        else
        cout<<0<<endl;
    }
    // cout<<count<<endl;
}
