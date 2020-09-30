#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
bool comp(pii a,pii b)
{
    if(a.f==b.f)
        return a.s<b.s;
    return a.f>b.f;
}
void solve()
{
    int m; cin>>m;
    vector<pii> dolls(m);
    for(int i=0;i<m;i++)
    {
        cin>>dolls[i].f>>dolls[i].s;
    }
    sort(dolls.begin(),dolls.end(),comp);
    // for(auto x: dolls)
    //     cout<<x.f<<" "<<x.s<<"\t";
    // cout<<endl;
    vector<int> curr;
    curr.pb(0);
    
    for(int i=1;i<m;i++)
    {
        int l=0,r= curr.size()-1,mid;
        while(l<=r)
        {
            mid = l + (r-l)/2;
            int k = curr[mid];
            if(dolls[k].s<=dolls[i].s || dolls[k].f==dolls[i].f)
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        if(l==curr.size())
        {
            curr.pb(i);
        }
        else{
            curr[l] = i;
        }
        
    }
    // for(auto u: curr)
    //     cout<<dolls[u].f<<" "<<dolls[u].s<<"\t";
    // cout<<endl;
    cout<<curr.size()<<endl;
    // dolls.clear();
    // curr.clear();
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
