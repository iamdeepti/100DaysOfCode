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
    int n;
    cin>>n;
    vi c(n),o(n);
    ll minc=INT_MAX,mino=INT_MAX;
    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        minc = min(minc,c[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        cin>>o[i];
        mino = min(mino,o[i]);
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(c[i]>minc && o[i]>mino)
        {
            int k = min(c[i]-minc,o[i]-mino);
            ans += k;
            c[i] -= k;
            o[i] -=k;
        }
        if(c[i]>minc)
        {
            ans += (c[i]-minc);
            c[i] -= minc;
        }
        if(o[i]>mino)
        {
            ans += (o[i]-mino);
            o[i] -= mino;
        }
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
