#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,s;
    cin>>n>>s;
    if(s<2*n)
    {
        cout<<"NO";
        return 0;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n-1;i++)
            cout<<"2"<<" ";
        cout<<s-2*(n-1)<<endl;
        cout<<1<<endl;
    }
    return 0;
}