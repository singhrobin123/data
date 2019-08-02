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
	ll t;cin>>t;
	while(t--){
	ll n;
	cin>>n;
    ll x;
	n;
	vector<ll> v,ans;
	for(ll i=0;i<n-1;i++)
	{cin>>x;v.push_back(x);
	ans.push_back(x);}
	ll F;
	cin>>F;
	ll count=LLONG_MAX,loc=0;
	for(ll i=0;i<n-1;i++) 
	if(count>v[i])
	   {count=v[i];loc=i;}
    // cout<<count<<" "<<loc<<endl;
     if(F<count)
	   cout<<"impossible"<<endl;
	  else{
		  ans.push_back(-2);
		   for(ll i=loc;i<n;i++)
		      ans[i+1]=v[i];
		     ans[loc]=-2;
			 ll vip=0;
			 std::vector<ll>::iterator it;
			//  for(ll i=0;i<ans.size();i++)
			//  cout<<ans[i]<<" ";
			//  cout<<endl;
			
		 	 while(ans.size()!=2)
			 { 
				  if(vip+1==ans.size())
			    {
				 if(ans[vip]<0){vip=0;}
				 else if(ans[0]<0){ans[0]-=ans[vip];
				 vip=1;}
				 else{
				 it = ans.begin();
                std::advance(it,0);
                ans.erase(it); 
				vip=0;}
			 }
			 else if(ans[vip]<0)
			 {vip++;}
			else if(ans[vip+1]<0){
	    	   ans[vip+1]-=ans[vip];
				 vip+=2;
				 if(vip>ans.size()-1)
				 vip=0;
			 }  
			 else{
				 
				  it = ans.begin();
                std::advance(it,vip+1);
                ans.erase(it); 
				vip++;
				if(vip>ans.size()-1)
				 vip=0;
			 }

				 
			 }
			 ll k=0;
			 if(ans[0]<0){
				 k=abs(ans[0]);
			 }
			 else k=abs(ans[1]);
              cout<<"possible"<<endl;
			  cout<<loc+1<<" "<<k+F-2<<endl;
	  }
	}
	
	return 0; 
} 
