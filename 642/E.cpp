#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vi dp;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                dp.push_back(i);
        }
        int res = 0;
        
    }
    return 0;
}