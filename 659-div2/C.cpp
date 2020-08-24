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
string a,b;

struct comp{
    bool operator() (int x,int y) const{
        if((b[x])==(b[y]))
            return x<y;
        return ((b[x]-'a')<(b[y]-'a'));
    }
};
void solve()
{
    int n;
    cin>>n;
    
    cin>>a>>b;
    for(int i=0;i<n;i++)
        if(a[i]>b[i])
        {
            cout<<-1<<endl;
            return;
        }
    map<char,set<int,comp>> mp;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            mp[a[i]].insert(i);
    }
    
    int ans=0;
    for(auto x: mp)
    {
        int i = *mp[x.f].begin();
        // cout<<x.f<<mp[x.f].size()<<" ";
        
        
        ans++;
        for(auto j: mp[x.f])
        {
            // cout<<j<<" "<<"("<<a[j]<<":"<<b[j]<<")";
            a[j] = b[i];
            if(a[j]!=b[j])
                mp[b[i]].insert(j);
        }
        //mp[x.f].clear();
        // cout<<endl;
    }
    a.clear();b.clear();mp.clear();
    cout<<ans<<endl;
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
