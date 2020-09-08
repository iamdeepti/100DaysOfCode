#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,x,y,n;
        cin>>a>>b>>x>>y>>n;
        ll k1 = a-x;
        ll k2 = b-y;
        if(k1+k2<=n)
        {
            cout<<x*y<<endl;
        }
        else
        {
            ll res1 = (a-min(k1,n))*(b-min(k2,max(n-k1,1ll*0)));
            ll res2 = (b-min(k2,n))*(a-min(k1,max(n-k2,1ll*0)));
            cout<<min(res1,res2)<<endl;
        }
        
    }
    return 0;
}
