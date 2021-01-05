#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
int mod = 1e9+7;
int fact[1001];
void solve()
{
    int n, x, pos; cin>>n>>x>>pos;
    // if(pos == n/2)
    // {
    //     cout<<fact[n-1]<<endl;
    //     return;
    // }
    int left = 0,right = n, mid;
    int big = n-x, small = x-1,curr = n-1,ans =1;
    int  k1=0, k2 =0;
    while(left<right)
    {
        mid = (left + right)/2;
        if(pos>=mid)
        {
            left = mid+1;
            if(pos>mid)
            {
                ans = ((ans%mod) * small)%mod;
                small--;
                curr--;
            }
        }
        else{
            right = mid;
            ans = ((ans%mod) * big)%mod;
            big--;
            curr--;
        }
        
    }
    cout<<(ans*fact[curr])%mod<<endl;
}

int32_t main()
{
    fact[0]=1;
    for(int i=1;i<=1000;i++)    fact[i] = (i*fact[i-1])%mod;
    {
        solve();
    }
    return 0;
}
