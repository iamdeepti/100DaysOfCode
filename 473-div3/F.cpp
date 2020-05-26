#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    vi a(n);
    map<int,int> dp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        dp[a[i]]=0;
    }
    int ans=a[0];
    for(int i=0;i<n;i++)
    {
        dp[a[i]] = max(dp[a[i]],1+dp[a[i]-1]);
        if(dp[ans]<dp[a[i]])
            ans = a[i];
    }
    cout<<dp[ans]<<endl;
    ans = ans-dp[ans]+1;
    for(int i=0;i<n;i++)
    {
        if(a[i]==ans)
        {
            cout<<i+1<<" ";
            ans++;
        }
    }
    cout<<endl;
    return 0;
}