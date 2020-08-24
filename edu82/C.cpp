#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pii pair<int,int>
#define vi vector<int>
#define mp make_pair
#define pb push_back
#define f first
#define s second
const double pi = std::acos(-1);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fixed<<setprecision(7)<<cos(pi/(2*n))/sin(pi/(2*n))<<endl;
    }
    return 0;
}