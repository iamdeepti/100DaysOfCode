#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int steps = 0;
    while(n>1 && n%6==0)
    {
        n = n/6;
        steps++;
    }
    while(n%3==0 && n>1)
    {
        n = n/3;
        steps +=2;
    }
    if(n!=1){
        cout<<"-1"<<endl;
        return;
    }
    cout<<steps<<endl;
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