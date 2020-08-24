#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    vector<int> temp;
    vector<int> temp2;
    if(a[0]=='1')
    {    temp.pb(1);
        a[0]='0';
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            a[i]='0';
            temp.pb(i+1);
        }
    }
    if(b[0]=='1')
    {    temp2.pb(1);
        b[0]='0';
    }
    for(int i=1;i<n;i++)
    {
        if(b[i]!=b[i-1])
        {
            b[i]='0';
            temp2.pb(i+1);
        }
    }
    cout<<temp.size()+temp2.size()<<" ";
    reverse(temp2.begin(),temp2.end());
    for(auto x:temp)
        cout<<x<<" ";
    for(auto x:temp2)
        cout<<x<<" ";
    cout<<endl;    
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
