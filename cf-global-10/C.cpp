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
    int n;  cin>>n;
    vi a(n),wrong;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i && a[i]<a[i-1])
            wrong.pb(i);
    }
    int k = wrong.size();ll ans=0;
    for(int j=k-1;j>=0;j--)
    {
        int i = wrong[j];
        // cout<<i<<" ";
        ans+= (a[i-1]-a[i]);
        a[i] = a[i-1];
    }
    // cout<<endl;
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
