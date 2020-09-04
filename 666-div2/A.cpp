#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    int n; cin>>n;
    int cnt[26]={0};
    string str;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        for(auto ch:str)
            cnt[ch-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]%n!=0)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
  
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
