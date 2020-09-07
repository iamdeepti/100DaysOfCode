#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    int d = y-x + 1;
    if(d<=n)
    {
        if(d==n){
        for(int i=x;i<x+n;i++)
            cout<<i<<" ";
        cout<<endl;}
        else{
            int k = n-y+x-1;
            k = max(x-k,1ll*1);
            
            for(int i=k;i<k+n;i++)
                cout<<i<<" ";
            cout<<endl;
        }
        return;
    }
    else
    {
        d=1;
        int num = (y-x)/d + (x-1)/d +1;
        while(num>n && d<= y-x)
        {
            d++;
            if((y-x)%d !=0) continue;
            
            num = (y-x)/d +1;
            
        }
        // cout<<d<<" ";
        int k = (n-(y-x)/d);
        // cout<<k<<endl;
        int s =x - (k-1)*d;
        while(s<=0)
        {
            s+=d;
        }
        for(int i=0;i<n;i++)
        {
            cout<<s<<" ";
            s += d;
        }
    }
    
    cout<<endl;
}
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
