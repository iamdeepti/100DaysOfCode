#include<bits/stdc++.h>
using namespace std;
int c[26] ={0};
int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    
    cin>>s;
    for(int i=0;i<n;i++)
    {
        c[s[i]-'a']++;
    }
    int i=0;
    while(i<26 && k>0)
    {
        if(c[i]!=0)
        {
            int x = min(c[i],k);
            c[i] = x;
            k -= x;
        }
        i++;
    }
    for(int j=i;j<26;j++)
        c[j]=0;
    for(int i=0;i<n;i++)
    {
        if(c[s[i]-'a']==0)
            cout<<s[i];
        else
        {
            c[s[i]-'a']--;
        }
    }
    cout<<endl;
    return 0;
}