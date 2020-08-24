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
    int n,x;
    cin>>n;
    vi a(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        a[x]=i;
    }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}
