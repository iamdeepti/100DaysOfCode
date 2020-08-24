#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
unordered_map<char,pair<int,int>> mp = {{'L',{-1,0}},{'R',{1,0}},{'U',{0,1}},{'D',{0,-1}}};
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        int n = s.length();
        //set<char> use;
        pair<int,int> p={0,0};
        int d=0,u=0,l=0,r=0;
        for(int i=0;i<n;i++)
        {
            p.f += mp[s[i]].f;
            p.s += mp[s[i]].s;
            if(s[i]=='L')
                l++;
                else if(s[i]=='R')
                    r++;
                    else if(s[i]=='U')
                        u++;
                        else if(s[i]=='D')
                            d++;
        }
        if(p.f > 0)
        {
            r -= p.f;
        }
        else{
            l += p.f;
        }
        if(p.s > 0)
        {
            u -= p.s;
        }
        else{
            d += p.s;
        }
        if(l==0 && r==0 && u>0 && d>0)
         u=1,d=1;
        if(u==0 && d==0 && l>0 && r>0)
            l=1,r=1;
        cout<<l+r+u+d<<endl;
        for(int i=0;i<u;i++)
            cout<<'U';
        for(int i=0;i<r;i++)
            cout<<'R';
        for(int i=0;i<d;i++)
            cout<<'D';
        for(int i=0;i<l;i++)
            cout<<'L';
        cout<<endl;
        }
    return 0;
}