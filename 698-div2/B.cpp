// Author - Deepti Singh
// Created: 30 Jan 21, Saturday   01:00:49 pm
// Last modified: 30 Jan 21, Saturday   02:39:55 pm
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
int f[205];
vector<set<int>> unlucky(10);
void solve()
{
    int n, q; cin>>q>>n;
    while(q--)
    {
        int x; cin>>x;
        if(unlucky[n-1].find(x)!=unlucky[n-1].end())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
}
bool islucky(int n, int k)
{
    string s = to_string(n);
    // bug(s);
    loop(i,0,sz(s)) if(s[i]-'0'==k) return true;
    return false;
}
int32_t main()
{
    // ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    loop(i,1,10)
    {
        mset(f,0);
        loop(j,1,101)
        {
            if(islucky(j,i) || f[j]==1)
            {
                
                f[j]=1;
                loop(k,1,j+1)
                {
                    if(f[k]==1)
                    {
                        f[k+j]=1;
                    }

                }
            }
            
        }
        loop(j,1,101)
        {
            if(f[j]==0)
                unlucky[i-1].insert(j);
                // else
                // {
                //     bug(j);
                // }
                
        }
        // bug(i);
        // print(unlucky[i-1]);
    }
    while (t--) solve();

    return 0;
}



