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
    int n,m;    cin>>n>>m;
    vi a(n),b(m);
    ll res=0;
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<m;i++)    cin>>b[i];
    // for(int i=0;i<n;i++)
    // {
    //     int ans = 1<<10;
    //     for(int j=0;j<m;j++)
    //     {
    //         if((res|ans)>(res|(a[i]&b[j])))
    //         {    ans = a[i]&b[j];
    //             cout<<i<<","<<j<<":"<<ans<<" ";
    //         }
    //     }
    //     res = (res|ans);
    //     cout<<endl;
    // }
    for(int i=0;i<(1<<9);i++)
    {
        int k=0;
        for(int j=0;j<n;j++)
        {
            bool possible=false;
            for(auto x:b)
            {
                if((i|(a[j]&x))==i)
                {
                    possible=true;
                    // cout<<a[j]<<"&"<<x<<":"<<i<<" ";
                    break;
                }
            }
            if(possible)
                k++;
        }
        
        if(k==n)
        {
            cout<<i<<endl;
            return;
        }
    }
    // cout<<res<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}
