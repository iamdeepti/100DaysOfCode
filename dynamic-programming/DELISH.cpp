#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    int n; cin>>n;
    vector<int> D(n),pre(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>D[i];
        pre[i+1] = D[i] + pre[i];
    }
    vector<int> maxStart(n),maxEnd(n),minStart(n),minEnd(n);
    maxEnd[0]=D[0]; minEnd[0] = D[0];
    maxStart[n-1]=D[n-1]; minStart[n-1] = D[n-1];

    for(int i=1;i<n;i++)
    {
        maxEnd[i] = max(maxEnd[i-1]+D[i],D[i]);
        minEnd[i] = min(minEnd[i-1]+D[i],D[i]);
    }
    for(int i=n-2;i>=0;i--)
    {
        maxStart[i] = max(maxStart[i+1]+D[i],D[i]);
        minStart[i] = min(minStart[i+1]+D[i],D[i]);
    }
    int res = -1e9;
    for(int i=0;i+1<n;i++)
    {
       res = max(max(maxEnd[i]-minStart[i+1],maxStart[i+1]-minEnd[i]),res);
        // res = max(max(softMaxEnd[i]-softMinStart[i+1],softMaxStart[i+1]-softMinEnd[i]),res);
    }
    cout<<res<<endl;
}

int32_t main()
{
    int t;	cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
