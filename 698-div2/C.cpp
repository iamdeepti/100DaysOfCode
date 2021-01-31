// Author - Deepti Singh
// Created: 30 Jan 21, Saturday   02:42:26 pm
// Last modified: 30 Jan 21, Saturday   07:15:45 pm
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
void solve()
{
    int n; 
    cin>>n;
    vi d(2*n);
    loop(i,0,2*n)   cin>>d[i];
    sort(all(d));
    loop(i,0,2*n)
    {
        if(d[i]!=d[i+1] || d[i]&1)
        {
            cout<<"NO"<<endl;
            return;
        }
        i++;
    }
    int curr = 0, den=n;
    set<int> st;
    for(int i = 2*n-1; i>=0; i-=2)
    {
        d[i]/=2;
        if((d[i]-curr)%den != 0)
        {
            cout<<"NO"<<endl;
            return;
        }
        int x = (d[i]-curr)/den;
        if(st.find(x)!=st.end() || x<=0)
        {
            cout<<"NO"<<endl;
            return;
        }
        curr += x; den--;
        st.insert(x);
    }
    // print(st);
    cout<<"YES"<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}



