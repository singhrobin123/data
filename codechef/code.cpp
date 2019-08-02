#include<bits/stdc++.h>
//#include<algorithm>
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
        { vector<lli> v;
            ios_base::sync_with_stdio(false);
		    cin.tie(NULL);
		   cout.tie(NULL);
           lli n,m;
           cin>>n>>m;
           lli a[n][m];
           lli i=0,j;
           FOR(i,0,n){
           FOR(j,0,m)
           cin>>a[i][j];
           }
           lli sum=0,sum2=0,sum3=0,max=0,min=0;
            for ( i =0; i <n; i++)
            { for ( j = m-1; j>=0;j--)
            {  if((j-2)>=0 && i+2<n)
           { sum=(a[i][j]+a[i][j-1]+a[i][j-2]);
               sum2=(a[i+2][j]+a[i+2][j-1]+a[i+2][j-2]);
               sum3=a[i+1][j-2];
               v.push_back(sum+sum2+sum3);}
               else
               {
                break;
               }
             //  if(max<(sum+sum2+sum3))
               //  {  max=(sum+sum2+sum3);min=(sum+sum2+sum3);    sum=0,sum2=0,sum3=0;   }      
            }
            
                
            }
            sort(v.begin(),v.end());
            
            cout<<v[v.size()-1]<<endl;
            
            
            


            
            return 0;
        }