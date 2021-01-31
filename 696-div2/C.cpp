// Author - Deepti Singh
// Created: 25 Jan 21, Monday   01:55:33 pm
// Last modified: 26 Jan 21, Tuesday   12:08:19 pm
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
const int N = 1e6+1;
void solve()
{
    int n; cin>>n;
    vi a(2*n);
    unordered_map<int,int> hmap,temp;
    loop(i,0,2*n) 
    {  
        cin>>a[i];
        hmap[a[i]]++;
    }
    sort(all(a));
    int sum = 0, curr = a[2*n-1];
    hmap[curr]--;
    rloop(i,2*n-2,0)
    {
        sum  = a[i]+ a[2*n-1];
        curr = a[2*n-1];
        temp = hmap;
        temp[a[i]]--;
        int j = 2*n-2;
        vector<pii> res;
        while(j>=0)
        {
            
            if(temp.count(a[j])==0 || temp[a[j]]==0){j--;  continue;}
            temp[a[j]]--;
            // bug(curr,j);
            if(temp.count(curr-a[j])==0 || temp[curr-a[j]]==0)
            {
                // bug(a[j],curr-a[j]);
                break;
            }
            temp[curr-a[j]]--;
            res.pb({a[j],curr-a[j]});
            curr = max(a[j],curr-a[j]);
            j--;
        }
        if(j==-1)
        {
            cout<<"YES"<<endl;
            cout<<sum<<endl;
            cout<<sum-a[i]<<" "<<a[i]<<endl;
            for(auto x:res)
            {
                cout<<x.ff<<" "<<x.ss<<endl;
            }
            return;
        }
    }
    cout<<"NO"<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}



