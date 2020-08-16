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
    ll n,k;  cin>>n>>k;
    vector<ll> a(n);
    ll d=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        d = max(a[i],d);
    }
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }
    k--;
    ll d2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        a[i] = d-a[i];
        d2 = max(a[i],d2);
    }
    if(k&1)
    {
        // cout<<"here";
        for(int i=0;i<n;i++)
        {
            cout<<d2-a[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
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
