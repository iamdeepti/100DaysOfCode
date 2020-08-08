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
    int n,k;
    cin>>n>>k;
    vi a(n);
    int j=-1,ans=INT_MAX;
    for(int i=0;i<n;i++)
    {    cin>>a[i];
        if(k%a[i]==0 && ans>k/a[i])
        {
            ans = k/a[i];
            j = a[i];
        }
    }
    cout<<j<<endl;
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
