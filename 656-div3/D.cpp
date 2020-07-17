#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
int search(int start,int end,char ch,string &s)
{
    int len = end-start+1;
     int cnt1 = count(s.begin()+start,s.begin()+end+1,ch);
    int mid = start + (end-start)/2;
    int cnt2 = count(s.begin()+start,s.begin()+mid+1,ch);
    int cnt3 = count(s.begin()+mid+1,s.begin()+end+1,ch);
    // cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<" "<<start<<" "<<end<<" "<<s<<endl;
    if(len==1)
    {
        return 1-cnt1;
    }
    
    return min((mid-start+1-cnt2)+search(mid+1,end,ch+1,s),(end-mid-cnt3)+search(start,mid,ch+1,s));
    
    
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<search(0,n-1,'a',s)<<endl;
    }
    return 0;
}
