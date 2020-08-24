#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<ll,ll>
#define pb push_back
#define mk make_pair
#define vi vector<ll>
bool comp(pii a, pii b)
{
    if(a.f<b.f)
        return true;
}
void solve()
{
    int n;  cin>>n;
    vector<pii> a(n);
    vi b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].f;
        b[i]=a[i].f;
        a[i].s=i;
    }
    sort(a.begin(),a.end());
    // for(auto x:b)
    //     cout<<x<<" ";
    // cout<<endl;
    // for(auto x:a)
    //     cout<<x.f<<":"<<x.s<<" ";
    // cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i].f==b[i])
            continue;
        if(__gcd(a[i].f,b[i])%a[0].f!=0)
            {
                //   cout<<a[i].f<<" and"<<b[i]<<endl;
                cout<<"NO"<<endl;
                return;
            }
        // swap(b[i],b[a[i].s]);
    }
    cout<<"YES"<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;  cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
