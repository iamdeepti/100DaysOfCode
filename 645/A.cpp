#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        int n,m;
        cin>>n>>m;
        if(m%2==0 && n%2==0)
        {
            cout<<m/2*n;
        }
        else if(m%2==0)
        {
            // cout<<m*n/2+(m/2);
            cout<<n*(m/2);
        }
        else if(n%2==0)
        {
            // cout<<(m-1)*n/2+n/2;
            cout<<(n/2)*m;
        }
        else{
            cout<<n/2*m+(m+1)/2;
        }
        cout<<endl;
    }
    return 0;
}