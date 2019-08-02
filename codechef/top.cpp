#include<bits/stdc++.h>
#define ll long long int
#define uint unsigned
#define ull unsigned ll
#define pii pair<int,int>
#define pll pair<ll,ll>
#define PB push_back
#define fi first
#define se second
#define For(i,j,k) for (int i=(int)(j);i<=(int)(k);i++)
#define Rep(i,j,k) for (int i=(int)(j);i>=(int)(k);i--)
#define CLR(a,v) memset(a,v,sizeof(a))
#define CPY(a,b) memcpy(a,b,sizeof(a))
using namespace std;


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  cin>>t;
      while(t--){
        ll n,x;
        cin>>n;
        set<ll> s;
      for(ll i=0;i<n;i++){
        cin>>x;
        s.insert(x);
      }
      vector<ll> v;
      for(auto i=s.begin();i!=s.end();++i){
        v.push_back(*i);
      }
      if(v.size()==1)
      cout<<v[0]<<endl;
      else if(v.size()<20){
        
      
      ll ans=0,m=0;
      for(auto i=0;i<v.size();i++){
        for(auto j=0;j<v.size();j++){
          if(j==i)continue;
          else
           ans=__gcd(ans,v[j]);
        }ans+=v[i];
        m=max(m,ans);
        ans=0;
      }
      cout<<m<<endl;}
      else
      { ll b=v.size();
        ll dp[b+1],dp2[b+1];
        ll h=0;
        dp[0]=v[0];
        dp2[b-1]=v[b-1];
        for(ll i=1;i<b;i++){
          dp[i]=__gcd(dp[i-1],v[i]);
        
        }
        for(ll i=v.size()-2;i>=0;i--){
          dp2[i]=__gcd(dp2[i+1],v[i]);}
          
        ll ans=0,m=0;
        for (ll i = 0; i < b; i++)
        {
          if(i==0)
           ans=dp2[1]+v[i];
          else if(i>0&&i<(b-1))
          ans=__gcd(dp[i-1],dp2[i+1])+v[i];
          else if(i==b-1)
          ans=dp[b-2]+v[i];
      
           m=max(m,ans);
           ans=0;
        }
      cout<<m<<endl;}
      }
      
}