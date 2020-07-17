#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int m = max(x,max(y,z));
        if(x==m && y==m)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<z<<" "<<z<<endl;
        }
        else if(x==m && z==m)
        {
            cout<<"YES"<<endl;
            cout<<x<<" "<<y<<" "<<y<<endl;
        }
        else if(y==m && z==m)
        {
            cout<<"YES"<<endl;
            cout<<y<<" "<<x<<" "<<x<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
