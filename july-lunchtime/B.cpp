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
    ll n,m,x,y;
    cin>>n>>m>>x>>y;
    ll val = m*n;
    if(val==1)
        cout<<x<<endl;
    else if(val&1)
    {
        // if(y<=2*x && y>=x){
        //     cout<<((n*m)/2)*y+x<<endl;
        // }
        // else if(y<x){
        //     cout<<((n*m)/2)*y+y<<endl;
        // }
        // else{
        //     cout<<((n*m))*x<<endl;
        // }
        x = min(x,y);
        ll mn = min(y-x,x);
        cout<<(val/2+1)*x+(val-val/2-1)*mn<<endl;
    }
    else{
        // if(y-x<=x)
        //     cout<<((n*m)/2)*y<<endl;
        // else{
        //     cout<<((n*m))*x<<endl;
        // }
        x = min(x,y);
        ll mn = min(y-x,x);
        cout<<(val/2)*x+(val-val/2)*mn<<endl;
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
