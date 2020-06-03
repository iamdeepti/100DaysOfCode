#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
void solve()
{
    int n,m,a,b;
        cin>>n>>m>>a>>b;
        if(a*n !=b*m){
            cout<<"NO"<<endl;
            return;    
        }
        vector<vi> A(n,vi(m));
        // Evenly distribute 1's now
        int j=0;
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<a;k++,j=(j+1)%m)
                A[i][j]=1;
            
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                cout<<A[i][j];
            cout<<endl;
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}