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
int check(string &s,int i,int j)
{
    if(i==j)
    {
        return s.length() - count(s.begin(),s.end(),'0'+i);
    }
    int n = s.length();
    int ans = 0;
    char ch = '0'+i;
    int len = 0;
    for(int k=0;k<n;k++)
    {
        if(s[k]==ch)
        {
            len++;
            if((ch-'0')==i)
            {
                ch = '0'+j;    
            }
            else
                ch = '0'+i;
        }
        
    }
    
    if(len&1)
        return n-len+1;
    return n-len;
}
void solve()
{
    string s;
    cin>>s;
    int cnt[10];
    int n = s.length();
    // // if(n&1)
    // // {
    // //     if(count(s.begin(),s.end(),s[0])==n)
    // //     {
    // //         cout<<0<<endl;
    // //         return;
    // //     }
    // // }
    // // else
    // // {
    // //     int i,j;
    // //     for( i=2,j=3;i<n,j<n;i+=2,j+=2)
    // //     {
    // //         if(s[i]!=s[i-2] && s[j]!=s[j-2])
    // //         {
    // //             break;
    // //         }
    // //     }
    // //     if(i>n)
    // //     {3

    // //         cout<<0<<endl;
    // //         return;
    // //     }
    // // }
    // for(auto ch:s)
    // {
    //     cnt[ch-'0']++;
    // }
    int ans=n-1;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            ans = min(ans,check(s,i,j));
            // cout<<check(s,i,j)<<" "<<i<<" "<<j<<endl;
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
