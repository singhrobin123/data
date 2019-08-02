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
ll FindMaxSum(ll arr[], ll n) 
{ 
  ll incl = arr[0]; 
  ll excl = 0; 
  ll excl_new; 
  ll i; 
  
  for (i = 1; i < n; i++) 
  { 
     
     excl_new = (incl > excl)? incl: excl; 
  
     incl = excl + arr[i]; 
     excl = excl_new; 
  } 
  
   
   return ((incl > excl)? incl : excl); 
} 


int main()
{	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	 
	
	ll t;
    cin>>t;
    while(t--){
	     ll n;
		cin>>n;
		ll a[n];
		ll sum=0;
		for (ll i = 0; i < n; i++)
		{
			cin>>a[i];
			sum+=(a[i]*(i+1));
			
		}
	
		ll cost[n];
		
	    
		for (ll i = 0; i < n; i++)
	{cost[i]=0;}
		for (ll i = 0; i < n-1; i++)
		{ 
		    if(a[i]>a[i+1])
			{
			ll j=abs((a[i]*(i+1))+(a[i+1]*(i+2)));
			ll h=abs((a[i+1]*(i+1))+(a[i]*(i+2)));
			cost[i]=abs(h-j);}
			
		}

		sum+=FindMaxSum(cost,n);
       cout<<sum<<endl;
		
		
		

		
	}
	
}