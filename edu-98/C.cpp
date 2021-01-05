#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    string str; cin>>str;
    int n = str.length();
    map<char,int> mp;
    mp['(']=0;
    mp[']']=0;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(' || str[i]=='[')
        {
            mp[str[i]]++;
        }
        else if(str[i]==')' && mp['(']>0)
        {
            mp['(']--;
            cnt++;
        }
        else if(mp['[']>0 && str[i]==']')
        {
            mp['[']--;
            cnt++;
        }
    }
    cout<<cnt<<endl;
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
