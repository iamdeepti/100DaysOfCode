#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vi dp(k);
        int tot = count(s.begin(),s.end(),'1');
        // for(int i=0;i<n;i++)
        // {
        //     int p = (s[i]=='1')?1:-1;
        //     dp[i%k] = max(dp[i%k]+p,0);
        // }
        // int ans = max(0,tot-1);
        // for(int i=0;i<k;i++)
        // {
        //     ans = min(ans,tot-dp[i]);
        // }

        // int res = 0;
        int res = max(0,tot-1);
        for(int i=0;i<k;i++)
        {
            int curr = 0,ans= 0;
            for(int j=i;j<n;j+=i)
            {
                int p = (s[j]=='1')?1:-1;
                curr = max(curr+p,0);
                ans = max(ans,curr);
            }
            res = min(res,tot-ans);
            cout<<"here"<<endl;
        }
        cout<<res<<endl;
    }
    return 0;
}