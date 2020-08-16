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
#define psi pair<string,int>
struct comp{
    bool operator() (psi a,psi b)const{
        return a.f<b.f;
    }
};
void solve()
{
    int n;cin>>n;
    string str;
    int cnt[26]={0};
    vector<string> a;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        cnt[str[0]-'a']++;
        a.pb(str);
    }
    set<pair<string,int>,comp> temp;
    for(int i=0;i<n;i++)
    {
        if(cnt[a[i][0]-'a']==1)
            temp.insert({a[i],i});
    }
    for(auto x:temp)
    {
        cout<<x.f<<":"<<x.s<<endl;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x; cin>>x;
        if(x==1)
        {
            char ch;int i;
            cin>>i>>ch;
            if(temp.count({a[i-1],i-1}))
            {
                temp.erase({a[i-1],i-1});
            }
        }
        else if(x==2)
        {
            cout<<(temp.begin()->s)+1<<endl;
        }
        else
        {
            cout<<(temp.rbegin()->s)+1<<endl;
        }
    }
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
