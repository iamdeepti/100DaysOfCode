#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<int> a;
int curr[401]={0},next_pos[401]={0},dp[201]={0};
int curr2[401]={0};
struct comp
{
    bool operator() (int i,int j) const{
        if(i==j)  return false;
        if(curr2[i]==curr2[j])    return i<j;
        return curr2[i]>curr2[j];
    }
};

void solve()
{
    int n,m;
    cin>>n>>m;

    a.resize(m);
    memset(next_pos,0,sizeof(next_pos));
    memset(curr,0,sizeof(curr));
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=m-1;i>=0;i--)
    {
            next_pos[a[i]] = curr[a[i]];
        curr[a[i]] = i;
        dp[i] = next_pos[a[i]];
        if(!dp[i])
            dp[i] = m+1;
    }
    set<int,comp> st;
    int ans=0;
    for(int i=0;i<m;i++)
    {
        if(st.find(a[i])==st.end())
        {
            if(st.size()<n)
            {
                curr2[a[i]] = dp[i];
                st.insert(a[i]);
            }
            else{
                st.erase(st.begin());
                curr2[a[i]] = dp[i];
                st.insert(a[i]);
                
            }
            ans++;
        }
        else if(curr2[a[i]]!=dp[i]){
            st.erase(a[i]);
            curr2[a[i]] = dp[i];
            st.insert(a[i]);
        }
    }
    cout<<ans<<endl;
    a.clear();
}

int32_t main()
{
    int t;	cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
