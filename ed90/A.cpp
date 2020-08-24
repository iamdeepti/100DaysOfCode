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
    ll a,b,c;   cin>>a>>b>>c;
    ll l=0,r=0;
    if(a<c)
    {
        cout<<1<<" ";
    }
    else
        cout<<"-1"<<" ";
    if(a*b>c)
    {
        cout<<b<<endl;
    }
    else
        cout<<-1<<endl;
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
