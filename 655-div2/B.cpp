#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 int main()
 {
     int t;
     cin>>t;
     
     while(t--)
    {
        int n;
        cin>>n;
        vector<int> divisors;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i == 0)
                divisors.push_back(i);
        }
        divisors.push_back(n);
        n = n/divisors[0];
        ll a = n;
        ll b = n*(divisors[0]-1);
        cout<<a<<" "<<b<<endl;
    }

 }