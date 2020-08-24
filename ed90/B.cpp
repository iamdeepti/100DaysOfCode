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
int dp[100][100][2];
void solve()
{
    string s;
    cin>>s;
    int n =s.length(),ones=0,zeros=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            ones++;
        else
            zeros++;
    }
    int x = min(ones,zeros);
    if(x&1 )
    {
        cout<<"DA"<<endl;
        return;
    }
    cout<<"NET"<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;  cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
