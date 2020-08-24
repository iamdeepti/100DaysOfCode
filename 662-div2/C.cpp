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
bool comp(int a,int b)
{
    return a>b;
}
void solve()
{
    int n;
    cin>>n;
    vi a(n+1);
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;
    }
    sort(a.begin(),a.end(),comp);
    int k = a[0];
    int ans=0;
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]==k)
        {
            ans++;
            continue;
        }
        if((a[i]+count)>=k-1)
        {
            ans++;
            count += (a[i]-k+1);
        }
        else{
            count += a[i];
        }
    }
    cout<<ans<<endl;
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
