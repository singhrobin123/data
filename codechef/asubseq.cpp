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
{ ios_base::sync_with_stdio(false);
		    cin.tie(NULL);
		   cout.tie(NULL);
          lli t;cin>>t;
        while(t--){lli n;cin>>n;
        string s[n];
        for (lli i = 0; i <n; i++)
        {
           cin>>s[i];
        }
        lli c=0,o=0,d=0,e=0,h=0,f=0;
        for (lli i = 0; i <n; i++)
        { c+= std::count(s[i].begin(), s[i].end(), 'c');
        o+= std::count(s[i].begin(), s[i].end(), 'o');
        d+= std::count(s[i].begin(), s[i].end(), 'd');
        e+= std::count(s[i].begin(), s[i].end(), 'e');
        h+= std::count(s[i].begin(), s[i].end(), 'h');
        f+= std::count(s[i].begin(), s[i].end(), 'f');
        }lli count=0;
      //  cout<<c<<" o"<<o<<" d"<<d<<"e "<<e<<" h"<<h<<"f"<<endl;
        while((c-2)>=0 && (o-1)>=0 && (d-1)>=0 && (e-2)>=0 && (h-1)>=0 && (f-1)>=0)
        {
          //  cout<<"dd"<<endl;
             c=c-2,o=o-1,d=d-1,e=e-2,h=h-1,f=f-1; count++;
            
        }
        cout<<count<<endl;
        }
    return 0; 
}
