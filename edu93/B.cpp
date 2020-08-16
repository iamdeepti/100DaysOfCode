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
    string str;
    cin>>str;
    // int a = 1;
    // int anstr=0;
    priority_queue<int> pq;
    int n =str.length();
    for(int i=0;i<n;i++)
    {
        // cout<<"x";
        
        int j=i;
        while(j<n && str[j]=='1')
            j++;
        // cout<<i<<" "<<j<<endl;
        if(j!=i)
        {
            // cout<<i<<" "<<j<<endl;
            pq.push(j-i);
        }
        i = j;
    }
    int a=1;ll ans=0;
    while(!pq.empty())
    {
        // cout<<"x";
        // cout<<pq.top()<<" ";
        if(a)
        {
            ans += pq.top();
            // pq.pop();
            // cout<<ans<<" ";
        }
        pq.pop();
        a = a^1;
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
