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
// bool is_prime(ll n){
//     if(n==2||n==3||n==5||n==7||n==11||n==13||n==17||n==19)
//     return true;
//     else{
//         for(ll i=2;i*i<=n;i++)
//         if(n%i==0)
//          return false;
//         return true;
//     }
// }

int main()
        { 
        ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
        ll t;
        cin>>t;
        while(t--){
        lli n1,x;
        cin>>n1;
        set<ll> a;
        for(ll i=0;i<n1;i++)
         cin>>x,a.insert(x);
        ll n2;
        cin>>n2;
        set<ll> b;
        for(ll i=0;i<n2;i++)
         cin>>x,b.insert(x);
        ll n3;
        cin>>n3;
        set<ll> c;
        for(ll i=0;i<n3;i++)
         cin>>x,c.insert(x);
        ll n4;
        cin>>n4;
        set<ll> d;
        for(ll i=0;i<n4;i++)
         cin>>x,d.insert(x); 
        bool flag=true,flag1=true;
        for (auto i =c.begin(); i!=c.end(); ++i)
        {
            if(a.find(*i)==a.end())
            {flag=false;break;}
        }
        for (auto i =d.begin(); i!=d.end(); ++i)
        {
            if(b.find(*i)==b.end())
            {flag1=false;break;}
        }
        if(flag&&flag1){
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
        
       
       
        }
            return 0;
        }







 