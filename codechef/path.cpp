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

        int main()
        { 
            ios_base::sync_with_stdio(false);
		    cin.tie(NULL);
		   cout.tie(NULL);
          lli t;cin>>t;
        while(t--){
		lli n;
		cin>>n;lli sum=0,maxe=0,maxo=100000000,even=0,odd=0;
        lli a[n];
        for (lli i = 0; i <n; i++)
          {cin>>a[i];
		  if(a[i]%2==0){even++;
		  if(maxe<a[i])
		    maxe=a[i];
		  }
		  else {odd++;
		  if(maxo>a[i])
		    maxo=a[i];
		  }   }
        //  lli min=10000000;
         // sort(a,a+n);
     //     cout<<"e"<<even<<" "<<odd<<endl;
         if(even>odd){
              for (lli j = 0; j <n;j++){
                  sum+=maxe^a[j];
			  }   }
         else  {
              for (lli j = 0; j <n;j++){
                  sum+=maxo^a[j];
			  }   }

     cout<<sum<<endl;
    
        }      
            return 0;
        }
