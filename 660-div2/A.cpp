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
    int n;
    cin>>n;
    if(n<=30)
    {
        cout<<"NO"<<endl;
        return;
    }
        
    cout<<"YES"<<endl;
    if(n==36)
    {    
        cout<<6<<" "<<10<<" "<<15<<" "<<5<<endl;
        return;
    }
    if(n==44)
    {
        cout<<6<<" "<<10<<" "<<21<<" "<<7<<endl;
        return;
    }
    if(n==40)
    {
        cout<<6<<" "<<10<<" "<<15<<" "<<9<<endl;
        return;
    }
    cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
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
