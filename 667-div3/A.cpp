#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll res = abs(b-a)/10 + ((abs(b-a)%10==0)?0:1);
        cout<<res<<endl;
    }
    return 0;
}
