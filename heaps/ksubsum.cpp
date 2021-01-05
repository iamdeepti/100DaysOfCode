#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
bool comp(int a, int b){
    return a>b;
}
void solve()
{
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int n, k1, k2, k3; cin>>n>>k1>>k2>>k3;
    vector<int> a(n);
    vector<int> preSum(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        preSum[i] = a[i];
        if(i)  preSum[i] += preSum[i-1];
        // cout<<preSum[i]<<" ";
    }
    // cout<<endl;
    vector<int> subSum;
    for(int i=0;i<n;i++)
    {
        subSum.push_back(preSum[i]);
        for(int j=0;j<i;j++)
        {
            subSum.push_back(preSum[i]-preSum[j]);
        }
    }
    sort(subSum.begin(),subSum.end(),comp);
    // for(auto x: subSum) cout<<x<<" ";
    // cout<<endl;
    cout<<subSum[k1-1]<<" "<<subSum[k2-1]<<" "<<subSum[k3-1]<<endl;
}

int32_t main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int t;	cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
