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
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,l,r;
        cin>>l>>r;
        x = l;
        y = 2*x;
        if(y>r)
            cout<<-1<<" "<<-1<<endl;
        else
            cout<<x<<" "<<y<<endl;
    }
    return 0;
}
