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

void find(vector<bool>&v){
      
                     lli yy=v.size()-1;
                     while(yy>=0){
                       if(v[yy]==0)
                       v.pop_back();
                       else break;
                     }
}

int main()
        { 
            ios_base::sync_with_stdio(false);
		    cin.tie(NULL);
		    cout.tie(NULL);
        
            lli t;cin>>t;
            while(t--){
                  lli n,z,x,one=0,zero=0,loc=-1,step=-1;
                  bool fn=false;
                  cin>>n>>z;
                  vector<bool> v;
                  for (lli i =1; i <=n; i++)
                  {
                    cin>>x;
                    if(x==1)one++;
                    if(x==0){zero++;
                    if(!fn)loc=i,fn=true;}
                    v.push_back(x);
                  }
                  bool th=false;
                  if(loc!=-1){
                    step=n-loc;
                  }
                 // cout<<"loc="<<loc<<endl;
                  //cout<<"step "<<step<<endl;
                  if(step!=-1){
                    if(z>=step){
                     // cout<<"e"<<endl;
                      th=true;
                      for (lli i = 0; i <one; i++)
                      {
                        cout<<1<<" ";
                      }
                      for (lli i = 0; i <zero; i++)
                      {
                        cout<<0<<" ";
                      }
                      cout<<endl;
                    }
                  }
                   if(!fn){
                   // cout<<"xx"<<endl;
                    th=true;
                     for (lli i = 0; i <one; i++)
                      {
                        cout<<1;
                      }cout<<endl;
                  }
                  vector<lli> iden;
                   if(th==false) {
                     lli yy=v.size()-1;
                     while(yy>=0){
                       if(v[yy]==0)
                       {v.pop_back();yy--;}
                       else break;
                     }
               for(lli vt=0;vt<v.size();vt++){
                 if(v[vt]==0)
                  iden.push_back(vt);
               }
               /* for (lli j =0; j <iden.size(); j++){
                  cout<<"iden "<<iden[j]<<" ";
                }cout<<endl;*/
               for (lli i =1; i <=z; i++){
                    
                      for (lli j =0; j <iden.size(); j++){
                        if(iden[j]>=v.size()&&iden[j+1]>=v.size())
                           break;
                           else if(v[iden[j]]==0&&v[iden[j]+1]==1)
                            { v[iden[j]]=1;v[iden[j]+1]=0;
                                iden[j]+=1;         }
                      }
                      lli yy=v.size()-1;
                     while(yy>=0){
                       if(v[yy]==0)
                      { v.pop_back();yy--;}
                       else break;
                     }

               }
                  //  cout<<"ff"<<endl;
          /*  lli prev,next;bool flag=false;
                  for (lli i =1; i <=z; i++){
                      prev=v[0];
                      for (lli j =0; j <v.size()-1; j++){
                         // prev=v[j];
                          //next=v[j+1];
                         if(prev==0&&v[j+1]==1)
                          { flag=true;
                              prev=v[j+1];
                              lli h=v[j];
                            v[j]=v[j+1];
                            v[j+1]=h;

                          }
                          if(!flag)
                          {prev=v[j+1];}
                          flag=false;
                          next=v[j+2];
                       
                  }
                  */
                  // }
                  lli fin=n-v.size();

                  for (auto i =v.begin(); i!=v.end(); ++i){
                     cout<<*i<<" ";
                  }
                  for (auto i =0; i<fin; ++i){
                     cout<<0<<" ";
                  }
                   cout<<endl;

                  
                  }

                  }
         
            return 0;
        }







 