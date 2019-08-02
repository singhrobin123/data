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
            lli n,a,b,x,y,z;cin>>n>>a>>b>>x>>y>>z;
            lli ab[n];
            for(lli i=0;i<n;i++)
           {   cin>>ab[i];}

           lli sa=a;lli sb=b;lli day=0;bool kk=false,pp=false;
           while(1){
               sa=sa+x;
               sb=sb+y;
               if(sa>=z&&sb>=z){kk=true; break;}
               else if(sa>=z&&sb<z){pp=true;break;}
               else if(sa<z&&sb>=z)
               {sa-=x;
           sb-=y;break;}
               day++;
           } bool flag=false,flag2=false;lli count=0;
           if(pp){cout<<"0"<<endl;}
           else{
               if(kk){sb-=y;sa-=x;}
           sort(ab,ab+n);
          // cout<<sa<<" "<<sb<<endl;
            while(1){
                for (lli i =n-1; i>=0;i--)
                { if (ab[i]!=0&&sa+ab[i]<z)
                        {sa+=ab[i];ab[i]=floor(ab[i]/2);count++;}
                        else if(sa+ab[i]<z) {//cout<<"hey"<<endl;
                        flag2=true;
                         break;
                          }
                   else if(sa+ab[i]>=z)
                      {count++;flag=true;break;};
                
                 
                }
                if(flag2||flag)break;
                
            }
            if(flag){
                 cout<<count;}
            else 
            {cout<<"RIP";}

            cout<<endl;

           }
        
    
        }      
            return 0;
        }







 