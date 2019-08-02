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
#define M 1000000007


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll t;
  cin>>t;
      while(t--){
        ll n,k,x;
        cin>>n>>k;
        ll r=k+n-1;
        ll p=k-1;
        ll d=n-1;
        ll a=k-n;
        if(a<1)cout<<(k-1)%M<<endl;
        else{
     //   float c=0.00000;
        ll d1=a+d;
       ll c=floor(d1/d);
     
        ll sum=c*(2*a+(c-1)*(1-n))/2;
         sum=floor(sum);
       
        cout<<(sum+k-1)%M<<endl;}          
      }
      
}