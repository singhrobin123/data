#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool vsortcol( const vector<ll>& v1,const vector<ll>& v2 ) { 
 return v1[1]<v2[1]; 
}
bool vsortcol2( const vector<ll>& v1,const vector<ll>& v2 ) { 
 return v1[0]<v2[0]; 
}

int main()
 {  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    	ll n,m;
		cin>>n>>m;

   // ll s[n+1];
    //ll w[m+1];
    ll u,v;
    vector<vector<ll>> vect(m);
    for(ll i=1;i<=n;i++)
     cin>>u;
    for(ll i=1;i<=m;i++)
     cin>>v;
    for(ll i=1;i<=m;i++)
    { cin>>u>>v;
      vect[i-1].push_back(u);vect[i-1].push_back(v);vect[i-1].push_back(i);
    
	  }
      sort(vect.begin(), vect.end(),vsortcol);
      sort(vect.begin(), vect.end(),vsortcol2);
    
     ll ind=1;
    
    
     while(true){
         ll b1,b2,b3;
    if(ind<m){
        if(vect[ind][0]==vect[ind-1][0]){
            cout<<vect[ind][2]<<endl;
           //for(ll i=1;i<=3;i++)
           cin>>b1>>b2>>b3;}
        ind+=1;}
    else
        {break;}}
    cout<<-1<<endl;
    if(n%2==0){
        for (ll i = 0; i < floor(n/2); i++)
        {
            cout<<"GC";
        }cout<<endl;
        
    }
    else {
        for (ll i = 0; i < floor(n/2); i++)
        {
            cout<<"GC";
        }
        cout<<"G"<<endl;
        
    }
	
}