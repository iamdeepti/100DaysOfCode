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
    int c,r;
    cin>>c>>r;
    int digc=0,digr=0;
    // while(c)
    // {
    //     if(c>=9)
    //     {
    //         c-=9;
    //     }
    //     else
    //         c=0;
    //     digc++;
    // }
    digc = (c+8)/9;
    digr = (r+8)/9;
    // cout<<digc<<":"<<digr<<endl;
    // while(r)
    // {
    //     if(r>=9)
    //     {
    //         r-=9;
    //     }
    //     else
    //         r=0;
    //     digr++;
    // }
    if(digc<digr)
    {
        cout<<0<<" "<<digc<<endl;
        return;
    }
    cout<<1<<" "<<digr<<endl;
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
