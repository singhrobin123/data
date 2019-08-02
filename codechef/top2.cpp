#include<bits/stdc++.h>
#define lli long long int

using namespace std;



int main()
        { 
        ios_base::sync_with_stdio(false);
		    cin.tie(NULL);
		    cout.tie(NULL);
        lli n,k;
        cin>>n>>k;
        lli x=n-k;
         if(k==1||k==0)
         {
           if(n>0)
           cout<<1<<endl;
           else
           {
             cout<<0<<endl;
           }
           
         }
        else if(x>k)
         cout<<k<<endl;
        else
        {
          cout<<x<<endl;
        }
        
            
            return 0;
        }







 