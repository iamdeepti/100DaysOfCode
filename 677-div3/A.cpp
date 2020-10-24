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
    string str;
    cin>>str;
    int k = str.length();
    int p = str[0]-'0';
    cout<<(k*(k+1))/2 + (p-1)*10<<endl;
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
