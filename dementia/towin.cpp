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
    vi a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    if(n==1)
    {
        cout<<"first"<<endl;
        return;
    }
    if(n==2)
    {
        if(a[0]!=a[1])
        cout<<"first"<<endl;
        else
        cout<<"draw"<<endl;
        return;
    }
    reverse(a.begin(),a.end());
    ll fk =a[0],sk=a[1]+a[2];
    for(int i=3;i<n;i++)
    {
        if(i&1)
            fk += a[i];
        else
            sk += a[i];
    }
    if(fk==sk)
        cout<<"draw"<<endl;
    else if(fk>sk)
        cout<<"first"<<endl;
    else 
        cout<<"second"<<endl;
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
