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
lli max(lli a,lli b){
    return a>b?a:b;
}

lli find_cost(lli a[],lli b[],lli n,lli l,char c,lli dp[]){
    if(l==n)
    return 0;
   else if(c=='G'){
       
        return dp[l];
    }
     
     else 
     return max(a[l]+find_cost(a,b,n,l+1,'G',dp),a[l]+find_cost(a,b,n,l+1,'F',dp));

}
        int main()
        { 
            ios_base::sync_with_stdio(false);
		    cin.tie(NULL);
		   cout.tie(NULL);
          lli t;cin>>t;
        while(t--){
		lli n;
		cin>>n;lli sum1=0,sum2=0,d=0;
        lli a[n],b[n],dp[n];
        for (lli i = 0; i <n; i++)
        cin>>a[i],sum1+a[i];
       
        for (lli i = 0; i <n; i++)
        cin>>b[i],sum2+=b[i],dp[i]=0;

        dp[0]=sum2;lli tmp=sum2;
        tmp-=b[0];

        for (lli i = 1; i <n; i++)
         {dp[i]=tmp;tmp-=b[i];}
   
       
         char l='F';
    
       d=find_cost(a,b,n,0,l,dp);
       lli x=max(sum1,sum2);
       if(d>x)cout<<d<<endl;
       else {cout<<x<<endl;}

        }      
            return 0;
        }







 