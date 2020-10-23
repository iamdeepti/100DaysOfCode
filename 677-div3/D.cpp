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
    int n ; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    if(count(a.begin(),a.end(),a[0])==n)
    {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    set<int> unused;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[0])
        {
            cout<<1<<" "<<i+1<<endl;
        }
        else
        {
            unused.insert(i);
        }
        
    }
    for(int i=1;i<n;i++)
    {
        if(unused.find(i)==unused.end())
        {
            while(!unused.empty())
            {
                int k = *unused.begin();
                unused.erase(unused.begin());
                cout<<k+1<<" "<<i+1<<endl;
            }
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
