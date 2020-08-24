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
    ll x1,y1,z1,x2,y2,z2;
    cin>>x1>>y1>>z1>>x2>>y2>>z2;
    ll two = min(z1,y2);
    // ll zero = (min(x1,x2)+min(y1,y2-two)+min(z1,z2-two)+)
    ll neg = min(y1-min(y1,y2+x2-two),z2-min(z2,z1+x1-two));
    // ll neg = min(y1-min(y1,min(y1,y2)+min(y1,-min(y1,x2)+x2)),z2-min(z2,z1+x1-two));
    
    cout<<2*two-2*neg<<endl;
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
