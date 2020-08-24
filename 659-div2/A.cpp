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

void solve()
{
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    string b;
    for(int i=0;i<200;i++)
        b.pb('a');
    if(b.length()==0)
    {
        b.pb('a');
    }
    cout<<b<<endl;
    for(int i=0;i<n;i++)
    {
        int j=a[i];
        
        b[a[i]] = ((b[a[i]]-'a'+1)%26) + 'a';
         cout<<b<<endl;
    }
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
