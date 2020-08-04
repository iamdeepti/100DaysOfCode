#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<ll,ll>
#define pb push_back
#define mk make_pair
#define vi vector<int>
bool comp(pii a,pii b)
{
    return a.f<b.f;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream input("/home/deepti/Downloads/timber_input.txt");
    ofstream output("/home/deepti/Downloads/timber_output.txt");
    int t;
    input>>t;
    for(int i=0;i<t;i++)
    {
        output<<"Case #"<<i+1<<": ";
        int n,p,h;
        input>>n;
        vector<pii> a(n);
        for(int j=0;j<n;j++)
        {
            input>>p>>h;
            a[j] = mk(p,h);
        }
        ll ans=0;
        sort(a.begin(),a.end(),comp);
        map<ll,ll> r,l;
        set<ll> pos;
        for(int i=0;i<n;i++)
        {
            if(r.count(a[i].f+a[i].s)==0)
                r.insert({a[i].f+a[i].s,0});
            r[a[i].f+a[i].s] = max(r[a[i].f]+a[i].s,r[a[i].f+a[i].s]);
            ans = max(ans,r[a[i].f+a[i].s]);
            // output<<r[a[i].f+a[i].s]<<" at "<<a[i].f+a[i].s<<" ";
            pos.insert(a[i].f+a[i].s);
        }
        // output<<endl;
        for(int i=n-1;i>=0;i--)
        {
            if(l.count(a[i].f-a[i].s)==0)
                l.insert({a[i].f-a[i].s,0});
            l[a[i].f-a[i].s] = max(l[a[i].f]+a[i].s,l[a[i].f-a[i].s]);
            ans = max(ans,l[a[i].f-a[i].s]);
            // output<<l[a[i].f-a[i].s]<<" at "<<a[i].f-a[i].s<<" ";
            pos.insert(a[i].f-a[i].s);
        }
        // output<<endl;
        
        for(auto x:pos)
        {
            ans = max(ans,r[x]+l[x]);
        }
        
        output<<ans<<endl;
    }
    return 0;
}
