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
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ifstream input("/home/deepti/Downloads/alchemy_input (2).txt");
    ofstream output("/home/deepti/Downloads/alchemy_output.txt");
    int t;
    input>>t;
    for(int i=0;i<t;i++)
    {
        output<<"Case #"<<i+1<<": "<<endl;
        int n;
        input>>n;
        string s;
        input>>s;
        int x=0;
        for(char ch: s)
            if(ch=='A') x++;
        if(abs(n-2*x)==1) output<<"Y"<<endl;
        else output<<"N"<<endl;
    }

    
    input.close();
    output.close();
    return 0;
}
