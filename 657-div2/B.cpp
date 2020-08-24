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
    ll l,r,m;  cin>>l>>r>>m;
    ll n,a,b,c;
    for(int i=l;i<=r;i++)
    {
        a = i;
        n = (m+r-l)/a;
        ll diff = m-n*a;
        if(diff>r-l || diff<l-r)    continue;
        if(diff>0)
        {
            b=r;
            c=r-diff;
        }
        else
        {
            b=l;
            c=l-diff;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
        return;
    }
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
