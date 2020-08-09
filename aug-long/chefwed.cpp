#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<int>
void solve()
{
    int n,k;
    cin>>n>>k;
    vi x(n);
    vi a(101);
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        a[x]++;
    }
    ll cost=0,ans=INT_MAX;
    for(int i=1;i<=100;i++)
    {
        if(a[i]>1)
            cost += a[i];
    }
    if(k==1)
    {
        cout<<cost<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        cost=k*1ll*i;
        for(int j=1;j<=100;j++)
        {
            if(a[j]!=1 && a[j]!=i)
            cost += (a[j]+i-1)/i;
        }
        // cout<<"for "<<i<<" :"<<cost<<endl;
        ans = min(ans,cost);
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
