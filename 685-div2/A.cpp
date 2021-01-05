#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    int n; cin>>n;
    int cnt = 0;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    if(n==2)
    {
        cout<<1<<endl;
        return;
    }
    if(n==3)
    {
        cout<<2<<endl;
        return;
    }
    cnt = n&1;
    cnt += 2;
    cout<<cnt<<endl;
}

int32_t main()
{
    int t;	cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
