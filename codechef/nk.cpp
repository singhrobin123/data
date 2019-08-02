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

// ll find_min(ll arr[],ll n) 
// { 
//      ll min=LLONG_MAX;
//   for (ll i = 0; i < n; i++)
//   {
//     if(min>arr[i])
//     min=arr[i];
//   }return min;
  
// }

int main()
{	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	ll t;
    cin>>t;
    while(t--){

		        ll n,z,c;
                cin>>n>>z;
                vector<ll> arr;
                set<ll> s;
                for (ll i = 0; i < n; i++)
                 {cin>>c;arr.push_back(c);s.insert(c);}
              //  sort(arr.begin(),arr.end());
                //ll hit=((n/2)+1)*arr[0];
                 bool flag=false;
                 auto x=0;
                 ll p=0;  
                 vector<pair<ll,ll>> fq;
                 for (auto i = s.begin(); i!=s.end();++i)
                 {
                  x=std::count(arr.begin(),arr.end(),*i);
                  fq.push_back(make_pair(*i,x));
                //   if(x>n/2)
                //     {flag=true;p=*i;break;}
                      }
                      ll min=LLONG_MAX;
                for (auto i =0; i<fq.size()-1;i++){
                    ll sum=1;
                     for (auto j =i+1; j<fq.size();j++){
                        sum+=fq[j].second;
                     }
                     sum*=fq[i].first;
                     if(min>sum){
                         min=sum;
                     }

                }
                if(fq[fq.size()-1].first<min)
                min=fq[fq.size()-1].first;
                cout<<min<<endl;

//                  ll hit=((n/2)+1)*p;
//                  auto pz=std::count(arr.begin(),arr.end(),arr[0]);
//                  if(z==1){
//                   if(n==1)cout<<arr[0]<<endl;
//                   else if(x>(n/2)&&hit<arr[n-1]&&flag)
//                   cout<<hit<<endl;
//                 else if(((n-pz+1)*arr[0])>arr[n-1])
//                    cout<<(arr[n-1])<<endl;
//                 else
//                 {
//                   cout<<(n*arr[0])<<endl;
//                 }
           
// 	}
//   else cout<<0<<endl;
    }
	
}