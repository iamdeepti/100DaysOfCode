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
        vector<vi> A(n);
        for(int i=0;i<n;i++)
        {
            A[i].resize(m);
        }
        vi c(n), r(n);
        for(int i=0;i<n;i++)
        {
            int j=0;
            while(j<m && c[j]==b)
            {    j++;
            }
            int k=a;
            while(k-- && j<m)
            {
                A[i][j]=1;
                c[j]++;
                r[i]++;
                j = (j+1)%m;
            } 
            
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