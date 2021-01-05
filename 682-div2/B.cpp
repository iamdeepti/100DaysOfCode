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
    vector<int> b(n);
    for(int i=0;i<n;i++)    cin>>b[i];
    for(int i=0;i<n;i++)
    {
        int k = b[i], zero=0;
        for(int j=i+1;j<n;j++)
        {
            if(b[j]==b[i]) {
                cout<<"YES"<<endl;
                return;
            }
            if(b[j]==k && !k)
                k--;
            if(!b[j])   zero++;
        }
        if(!k && zero==2)
        {
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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
