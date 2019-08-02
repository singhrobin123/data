#include<bits/stdc++.h>
#define lli long long int
#define pb push_back
#define mk make_pair
#define all(v) v.begin(),v.end()
#define sz(v) int(v.size())
#define ll long long
#define fi first
#define se second
#define FOR(i,a,b) for(ll int i=a;i<b;i++)
#define FORR(i,a,b) for(ll int i=a;i<b;i++)
using namespace std;
   
        int main()
        {
            ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
        lli a,b;
        cin>>a>>b;
        lli c=a-b;
        lli p=c%10;
        if((c-1)%10==0)cout<<c-2<<endl;
       
        
            return 0;
        }