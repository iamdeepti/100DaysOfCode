#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int x = min(n/k,m);
        int rem = m - x;
        rem = (rem%(k-1)==0)?rem/(k-1):(rem/(k-1) +1);
        cout<< x-rem<<endl;
    }
    return 0;
}