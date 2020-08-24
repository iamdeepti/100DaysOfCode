#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<ll>

void solve()
{
    int n;  cin>>n;
    string a; cin>>a; ll ans=0;
    int k = n-1;
    while(k>0 && a[k]==a[0])
    {
        k--;
    }
    
    if(k==0)
    {
        cout<<(n+2)/3<<endl;
        return;
    }
    int l = n-k-1;
    int p  = 0;
    while(p<n && a[p]==a[0])
        p++;
    l += (p);
    ans += l/3;
    for(int i=p;i<=k;i++)
    {
        int j=i;
        while(j<n && a[i]==a[j])
        {
            j++;
        }
        if(j-i == n)
        {
            cout<<(n+2)/3<<endl;
            return;
        }
        ans += (j-i)/3;
        if(i!=j)
            i = j-1;
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
