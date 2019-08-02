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
        lli t;cin>>t;
        while(t--){
             string str;
             cin>>str;
            string st="ETH";
            // e=0,t=0,h=0;
size_t e = std::count(str.begin(), str.end(),'E');
size_t h = std::count(str.begin(), str.end(),'H');
size_t t = std::count(str.begin(), str.end(),'T');
   lli E,T,H;
   cin>>E>>T>>H;
   lli ne,nt,nh;cin>>ne>>nt>>nh;
   bool fh=false;
             bool fe=false;
            bool   ft=false;   
   lli mon;cin>>mon;
        lli tot=e+h+t;
        lli min_car=0,c=0;
        while(1){
        if(H>=h&&T>=t&&E>=e){
           min_car++;
           E=E-e;H=H-h;T=T-t;
        }      
        else {break;}}
        while(1){
            if(H<h)
            {c+=(h-H)*nh;fh=true;}
            if(T<t)
           { c+=(t-T)*nt;ft=true;}
            if(E<e)
           { c+=(e-E)*ne;fe=true;}
          
          if(mon>=c)
          {if(fh)H++;
          if(ft)T++;
          if(fe)E++;
              
              mon=mon-c;min_car++;
              E=E-e;H=H-h;T=T-t;
              fh=false;
              fe=false;
              ft=false;
          }
          if(mon<c)break;
        }cout<<min_car<<endl;
        }
            return 0;
        }







 