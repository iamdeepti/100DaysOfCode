#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<int>
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    if(s[0]==s[1] && s[1]==s[2] && s[0]=='R')
        cout<<3<<endl;
    else if(s[0]==s[1] && s[1]=='R')
        cout<<2<<endl;
    else if(s[1]==s[2] && s[2]=='R')
        cout<<2<<endl;
    else if(s[0]=='R' || s[1]=='R'||s[2]=='R')
    cout<<1<<endl;
    else
    cout<<0<<endl;
    return 0;
}
