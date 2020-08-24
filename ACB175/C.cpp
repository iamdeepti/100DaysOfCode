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
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll x,k,d;
    cin>>x>>k>>d;
    x = abs(x);
    ll y = abs(x)/d;
    // if(x>=0)
    {
        if(abs(k-y)&1)
        {

            cout<<min(abs(x-min(y-1,k)*d),abs(x-min(y+1,k)*d))<<endl;

        }
        else
        cout<<x-min(y,k)*d<<endl;
    }
    // else
    // {
    //     if(abs(k-y)&1)
    //     {

    //         cout<<min(min(abs(x+min(y-1,k)*d),abs(x+min(y+1,k)*d)),abs(x))<<endl;

    //     }
    //     else
    //     cout<<x+min(y,k)*d<<endl;
    // }
    return 0;
}
