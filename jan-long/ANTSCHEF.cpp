// Author - Deepti Singh
// Created: 2 Jan 21, Saturday   02:04:13 pm
// Last modified: 20 Jan 21, Wednesday   01:37:42 pm
// Institution - DTU
// email - iamdeepti956@gmail.com
#include <bits/stdc++.h>
using namespace std;
 
#define int             long long int
#define ff              first
#define ss              second
#define pb              push_back
 
#define vi              vector <int>
#define pii             pair <int, int>
 
#define loop(i,s,e)     for(int i=s;i<e;i++)
#define rloop(i,e,s)    for(int i=e;i>=s;i--)
#define mset(a,f)       memset(a,f,sizeof(a))
 
#define endl            "\n"
#define sz(x)           ((int) x.size())
#define all(p)          p.begin(), p.end()
#define print(a)		for(auto x:a) cout<<x<<" ";	cout<<endl
#define Print(a,s,e)	for(int i=s; i<e; i++) cout<<a[i]<<" ";	  cout<<endl 
#define bug(...)        __f (#__VA_ARGS__, __VA_ARGS__)
 

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
struct data{
    set<int> pos, neg;
};
void solve()
{
    int n,m; cin>>n;
    int x;
    map<int,int> coords;
    vector<data> ants(n);
    loop(i,0,n)
    {
        cin>>m;
        loop(j,0,m)
        {
            cin>>x;
            (x>0)?ants[i].pos.insert(x):ants[i].neg.insert(x);
            coords[x]++;
        }
    }
    int ans = 0;
    loop(i,0,n)
    {
        // print(ants[i].pos); print(ants[i].neg);
        while(!ants[i].pos.empty() || !ants[i].neg.empty())
        {
            int curr = 0;
            if(ants[i].pos.empty())
            {
                curr = *ants[i].neg.rbegin();
            }
            else if(ants[i].neg.empty())
            {
                curr = *ants[i].pos.begin();
            }
            else if(abs(*ants[i].pos.begin())<abs(*ants[i].neg.rbegin()))
            {
                curr = *ants[i].pos.begin();
            }
            else{
                curr = *ants[i].neg.rbegin();
            }
            // bug(curr);
            if(curr>0)
            {
                ants[i].pos.erase(curr);
                if(coords[-curr]+coords[curr]>1)
                {
                    ans += sz(ants[i].pos);
                    // print(ants[i].pos);
                }
                else
                {
                    ans += sz(ants[i].neg);
                    // print(ants[i].neg);
                }
                
            }
            else
            {
                ants[i].neg.erase(curr);
                if(coords[-curr]+coords[curr]>1)
                {
                    ans += sz(ants[i].neg);
                    // print(ants[i].neg);
                }
                else
                {
                    ans += sz(ants[i].pos);
                    // print(ants[i].pos);
                }
                
            }
        }
    }
    int k = 0;
    for(auto x: coords)
    {
        if(x.ss+coords[-x.ff]>1)
            k++;
    }
    cout<<ans+k/2<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}



