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
    vector<int> p(n);
    for(int i=1;i<n;i++)
        p[i] = i;
    p[0] = n;
    for(auto x:p)
        cout<<x<<" ";
    cout<<endl;
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
