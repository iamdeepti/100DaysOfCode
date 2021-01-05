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
 
#define bug(...)        __f (#__VA_ARGS__, __VA_ARGS__)
 
 
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
void rev(string &s,int i,int j)
{
    for(int k=i,l=j;k<l;k++,l--)
        swap(s[k],s[l]);
    
}
void solve()
{
    int n;  cin>>n;
    string s;   cin>>s;
    int zero = 0,ones = 0;
    loop(i,0,n-1)
    {
        if(s[i]==s[i+1])
        {
            if(s[i]=='0')
                zero++;
            else
            {
                ones++;
            }
            
        }    
    }
    cout<<max(zero,ones)<<endl;

}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
// #ifndef ONLINE_JUDGE
//     freopen("input.txt",  "r",  stdin);
//     freopen("output.txt", "w", stdout);
// #endif
 
    int t = 1;
    cin >> t;
    while (t--) solve();
 
    return 0;
}


