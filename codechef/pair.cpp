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
void find_min(vector<ll> &v,ll *loc1,ll *loc2,ll *value){
	*value=100000000;
	 for(ll i=0;i<v.size();i++){
		 if(i+1==v.size()){
			 if(v[i]+v[0]<*value){
			 *value=v[i]+v[0];;
			 *loc1=i;*loc2=0;
		 }}
		 else {if(v[i]+v[i+1]<*value){
			 *value=v[i]+v[i+1];;
			 *loc1=i;*loc2=i+1;
		 }
		 }
         

	 }
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;cin>>t;
	while(t--){
	ll n;
	cin>>n;

    ll x;
	vector<ll> v;
	for(ll i=0;i<n;i++)
	{cin>>x;v.push_back(x);}
	ll loc1,loc2,value,parity=0;
    std::vector<ll>::iterator it;
    for(ll i=0;i<n-1;i++){
		find_min(v,&loc1,&loc2,&value);
		parity+=value;
		v[loc1]=value;
		it = v.begin();
        std::advance(it, loc2);
        v.erase(it);}
	
    cout<<parity<<endl;
	cout<<flush;
	}
	
	return 0; 
} 
