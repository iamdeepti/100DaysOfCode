#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k = sqrt(n);
    for(int i=2;i<=k;i++)
    {
        if(n%i == 0)
        {    reverse(s.begin(),s.begin()+i);
        // cout<<s<<" "<<i<<endl;
        }
    }
    if(k*k==n)
        k--;
    for(int i=k;i>=1;i--)
    {
        if(n%i==0)
       {     reverse(s.begin(),s.begin()+n/i);
            //  cout<<s<<" "<<n/i<<endl;
       }
        
    }
    cout<<s<<endl;
}