// Author - Deepti Singh
// Created: 5 Jan 21, Tuesday   09:16:12 pm
// Last modified: 6 Jan 21, Wednesday   11:47:25 am
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
const int N = 1e3+1;
bool prime[N];
vi pr;
void solve()
{
    int n; cin>>n;
    int a;
    map<int,int> mp;
    loop(i,0,n)
    {
        cin>>a;
        for(int x:pr)
        {
            if(x*x>a)    break;
            if(a%x)  continue;
            int cnt = 0;
            while(a%x==0)
            {
                a = a/x;
                cnt++;
            }
            if(cnt&1)
                a*=x;
        }
        mp[a]++;
    }
    int sumEven = 0, maxodd = 0, maxeven = 0,ans = 0;
    for(auto x:mp)
    {
        if((x.ss&1)&& x.ff!=1)
        {
            maxodd = max(maxodd,x.ss);
        }
        else
        {
            sumEven += x.ss;
            maxeven = max(maxeven,x.ss);
        }
        ans = max(x.ss,ans);
    }
    int q; cin>>q;
    while(q--)
    {
        int w; cin>>w;
        if(!w)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<max(maxodd,sumEven)<<endl;
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    mset(prime,true);
    loop(i,2,N)
    {
        if(prime[i])
        {
            pr.pb(i);
            for(int j=i*i;j<N;j+=i)
                prime[j]=false;
        }
    }
    while (t--) solve();

    return 0;
}



