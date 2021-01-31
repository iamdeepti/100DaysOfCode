// Author - Deepti Singh
// Created: 25 Jan 21, Monday   01:05:14 pm
// Last modified: 25 Jan 21, Monday   01:46:39 pm
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
// vector<vi> divisors(1001);
vi primes;
void solve()
{
    int d; cin>>d;
    // bug(d);
    int num1=0, num2=0,i=0;
    while(num1==0)
    {
        if(primes[i]>=1+d)
        {
            num1 = primes[i];
            break;
        }
        i++;
    }
    
    while(num2==0)
    {
        if(primes[i]>=d+num1)
        {
            num2 = primes[i];
            break;
        }
        i++;
    }
    // bug(num1,num2);
    cout<<num1*num2<<endl;

}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    
    
    const int n = 1e5+1;
    bool isprime[n];
    mset(isprime,true);
    loop(i,2,n)
    {
        if(isprime[i])
        {
            primes.pb(i);
            for(int j=i*i; j<n;j+=i)
            {
                isprime[j] = false;
            }
        }
    }
    // print(primes);
    while (t--) solve();

    return 0;
}



