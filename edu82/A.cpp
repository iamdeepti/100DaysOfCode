#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define f first
#define s second
int main()
{
int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>=a)
            cout<<b<<endl;
        else if(c<=d)
            cout<<"-1"<<endl;
        else{
            ll k = (a-b)/(c-d);
            k = ((b-a)%(c-d)==0)?k:k+1;
            cout<<b+c*k<<endl;
        }
    }
    return 0;
}