#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>

int main()
{
    string str; cin>>str;
    int n = str.length();
    vector<int> dp(n);
    stack<char> st;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(')
            st.push(str[i]);
        else
        {
            if(!st.empty())
            {
                st.pop();
                dp[i]=1;
            }
            else{
                dp[i] = 0;
            }
        }
        ans = max(ans,dp[i]);
    }
    // for(auto x:dp)
    //     cout<<x<<" ";
    // cout<<endl;
    while (!st.empty())
    {
        /* code */
        st.pop();
    }
    vector<int> dp2(n);
    
    for(int i=n-1;i>=0;i--)
    {
        if(str[i]==')')
            st.push(str[i]);
        else
        {
            if(!st.empty())
            {
                st.pop();
                dp2[i]=1;
            }
            else
            {
                dp2[i]=0;
            }
            
        }
        ans = max(ans,dp2[i]);
    }
    int k = 0;
    // for(auto x:dp2)
    //     cout<<x<<" ";
    // cout<<endl;
    for(int i=n-1;i>=0;i--)
    {
        if(dp[i]||dp2[i])
        {
            if(i!=n-1)
                dp2[i] += dp2[i+1];
            dp2[i] += dp[i];
        }
        ans = max(ans,dp2[i]);
    }
    // for(auto x:dp2)
    //     cout<<x<<" ";
    //     cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(dp2[i]==ans){  k++;
        // int j=i+1;
        // while(j<n && dp[j]==ans)   j++;
        // i = j-1;
        }
    }
    if(ans==0)  k=1;
    cout<<ans<<" "<<k<<endl;
    // cout<<dp[n-1]<<endl;
    return 0;
}
