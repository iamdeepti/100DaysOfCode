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
    string str,p;
    cin>>str>>p;
    map<char,int> mp;
    for(auto ch:str)
        mp[ch]++;
    for( auto ch:p)
    {
        mp[ch]--;
        if(mp[ch]==0)
            mp.erase(ch);
    }
    string ans;
    bool eq=false;
    for(auto x:mp)
    {
        if(x.f>p[0])
            break;
        if(x.f<p[0])
        {    
            while(x.s)
            {
                ans.pb(x.f);
                x.s--;
            }
            continue;
        }
        if(x.f==p[0])
        {
            int j=1;
            bool put=false;
            while(j<p.length())
            {
                if(p[j]<x.f)
                {
                    eq=true;
                    break;
                }
                if(p[j]>x.f)
                {
                    put = true;
                    break;
                }
                j++;
            }
            if(j==p.length())
            {
                eq=true;
            }
            if(put)
            {
                while(x.s)
                {
                    ans.pb(x.f);
                    x.s--;
                }
            }
        }
        
    }
    for(auto ch:p)
        ans.pb(ch);
    if(eq)
    {
        int k=mp[p[0]];
        while(k)
            {
                ans.pb(p[0]);
                k--;
            }
    }
    for(auto x:mp)
    {
        if(x.f<=p[0])
        {    
            
            continue;
        }
        while(x.s)
            {
                ans.pb(x.f);
                x.s--;
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
        // cout<<t<<endl;
        solve();
    }
    return 0;
}
