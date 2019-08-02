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


int main()
{	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll t;
    cin>>t;
    while(t--){
	     ll n,k;
		cin>>n>>k;
    if(n==k){
      cout<<0<<endl;
    }
    else if(n>k){
      if(k==2&&n>2)
        cout<<2<<endl;
      else if(k>2){
        if(n%2==1){
          ll count=0,z=k;
          for (size_t i = 0; i < n; i=i+2)
          { if(z==0)break;
            z--;
            count++;
          }
          ll sum=n-1;
          if(z!=0){
            for (size_t i = 0; i < n; i++)
            {if(z==0)break;
            z--;sum-=2;}
          }
          cout<<sum<<endl;
        }

        else if(n%2==0){

          ll count=0,z=k;
          for (size_t i = 0; i <n; i=i+2)
          { if(z==0)break;
            z--;
            count++;
          }

          ll sum=n-1;
          if(z!=0){z--;sum-=1;}
          if(z!=0){
            for (size_t i = 0; i < n; i++)
            {if(z==0)break;
            z--;sum-=2;}
          }
          cout<<sum<<endl;


        }
    }
    }
    else
    {
      ll m=(int)k/n;
      ll a=k%n;
      if(k%n==0)
       cout<<0<<endl;
      if(a==1 || n-a==1)
      cout<<2<<endl;
      else {
        cout<<2*a<<endl;
      }


    }
    
    
		
	}
	
}