#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<ll>
void solve()
{
    ll n;  cin>>n;
    vi a(n);
    ll sum=0;
    for(ll i=0;i<n;i++) 
    {   
        cin>>a[i]; 
        if(i%2==0)  sum+=a[i];
    }
    ll curr=0,ans=0;
    for(ll i=0;i<(n)/2;i++)
    {
        curr = max(1ll*0,curr+a[2*i+1]-a[2*i]);
        // cout<<curr<<endl;
        ans = max(curr,ans);
    }
    curr=0;
    
    for(ll i=1;i<(n+1)/2;i++)
    {
        curr = max(1ll*0,curr+a[2*i-1]-a[2*i]);
        ans = max(curr,ans);
    }
    
    cout<<sum+ans<<endl;
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
