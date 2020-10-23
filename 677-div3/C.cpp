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
    vector<int> a(n);
    int mx = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx = max(a[i],mx);
    }
    if(count(a.begin(),a.end(),mx)==n)
    {
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(i+1<n && a[i]==mx && a[i+1]<mx)
        {
            cout<<i+1<<endl;
            return;
        }
        if(i-1>=0 && a[i]==mx && a[i-1]<mx)
        {
            cout<<i+1<<endl;
            return;
        }
    }
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
