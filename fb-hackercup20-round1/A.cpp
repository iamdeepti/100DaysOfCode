#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<int>
void solve()
{
    
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream input("/home/deepti/Downloads/travel_restrictions_input.txt");
    ofstream output("/home/deepti/Downloads/travel_restrictions_output.txt");
    int t;
    input>>t;
    for(int i=0;i<t;i++)
    {
        output<<"Case #"<<i+1<<": "<<endl;
            int n;
        input>>n;
        vector<vi> g(n);
        vector<vector<char>> a(n,vector<char>(n,'N'));
        vi in(n),out(n);
        for(int i=0;i<n;i++)
        {
            char ch;
            input>>ch;
            if(ch=='Y')
            {    
                in[i]=1;
    
            }
        }
        for(int i=0;i<n;i++)
        {
            char ch;
            input>>ch;
            if(ch=='Y')
            {   
                out[i]=1;
    
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     g[i].pb(i);
    
        // }
        for(int i=0;i<n;i++)
        {
            a[i][i]='Y';
            if(i+1<n && in[i+1] && out[i])
            {
                a[i][i+1]='Y';
            }
            if(i-1>=0 && in[i-1] && out[i])
            {
                a[i][i-1]='Y';
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]=='N')
                {
                    if(i+1<n &&a[i+1][j]=='Y'&&a[i][i+1]=='Y')
                    {
                        a[i][j] = 'Y';
                    }
                    else if(i-1>=0 &&a[i-1][j]=='Y'&&a[i][i-1]=='Y')
                    {
                        a[i][j] = 'Y';
                    }
                }
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
            {
                if(a[i][j]=='N')
                {
                    if(i+1<n &&a[i+1][j]=='Y'&&a[i][i+1]=='Y')
                    {
                        a[i][j] = 'Y';
                    }
                    else if(i-1>=0 &&a[i-1][j]=='Y'&&a[i][i-1]=='Y')
                    {
                        a[i][j] = 'Y';
                    }
                }
            }
        }
        for(auto x:a)
        {
            for(auto u:x)
                output<<u;
            output<<endl;
        }
    }
    input.close();
    output.close();
    return 0;
}
