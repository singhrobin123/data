#include<bits/stdc++.h>
#define ll unsigned long long int
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
        ll n,k;
        cin>>n>>k;
        ll A=k-n;
     //   cout<<k;
        if(A<1)
        {cout<<(k-1)%M<<endl;}
        else{
          ll p=A+n-1;
          ll h=n-1;
          ll c=floor(p/h);
          ll sum=floor((2*A+(p-1)*(1-n))/2);
          sum=(c*sum)%M;
          ll sum2=(k+sum-1)%M;
          cout<<sum2%M<<endl;
        }
    
      }
      
}