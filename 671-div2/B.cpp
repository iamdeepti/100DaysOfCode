#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<int> ans(32);

void solve()
{
    int x; cin>>x;
    int it = (upper_bound(ans.begin(),ans.end(),x)-ans.begin());
    //  it--;
    // if(it<0)
    // {
    //     cout<<0<<endl;
    //     return;
    // }
    // if(ans[it-1]<=x)
    // cout<<it<<endl;
    // else
    // {
    //     cout<<it-1<<endl;
    // }
    if(x>=ans[it])
        it++;
    cout<<it-1<<endl;
}

int32_t main()
{
    int t;	cin>>t;
    ans[1]=1;
    int k = 1;
    for(int i=2;i<=31;i++)
    {
        k = k*2+1;
        ans[i] += (ans[i-1] + (k*(k+1))/2);
        // cout<<ans[i]<<" ";
    }
    // cout<<endl;
    while(t--)
    {
        solve();
    }
    return 0;
}
