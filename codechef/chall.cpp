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

#define M 1000000
bool prime[M];
ll v[M];
void SieveOfEratosthenes() 
{ 
	ll i=0;

	for (ll p=2; p<=M; p++) 
	{ 
		
		if (prime[p] == true) 
		{   v[i++]=p;
			
			for (ll i=p*p; i<=M; i += p) 
				prime[i] = false; 
		} 
	} 

	
} 
ll find_ans(ll y,ll c,ll *pr){
   ll m=pow(y,2);
   ll i=1,l=0,ans=0;
   bool flag=false;
   while(true){
      if(m%v[i]==c){
         ans=m%v[i];
         *pr=v[i];flag=true;
         break;

      }
      else if(v[i]>m){
         if(l==5)break;
         l++;
      }
      i++;
   }
   if(flag)return ans;
   else return -1;
}
int main()
{	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
   memset(prime, true, M);
   SieveOfEratosthenes();
   
	ll t;cin>>t;
	while(t--){
       ll x,y,que=10;
       while(true){
        cin>>x>>y;
        ll c;
        cin>>c;
        if(c==-1)return 0;
        else{ll pr=0;
           if(find_ans(y,c,&pr)==c)
           {cout<<"2"<<" "<<pr<<endl;
            cout<<flush;
           string s;
           cin>>s;
           if(s=="Yes")
           break;
           else if(s=="No") {return 0;}}
       

        }


       }

   }
   return 0;
	    
	
}