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
struct point{
 float x=0.000000,y=0.000000;
 //y=
};
struct equation{
    lli A,B;
    float C=0.000000;
};
bool issort(point &a,point &b){
     if (a.x == b.x)
     return a.y < b.y;
   else
   return a.x < b.x;
}

int main()
        { 
            ios_base::sync_with_stdio(false);
		    cin.tie(NULL);
		    cout.tie(NULL);
        
            lli t;cin>>t;
            while(t--){
                  lli n;
                  cin>>n;
                  point obj[n+1];
                  lli no_line=0;
                  for (lli i =1; i <=n; i++)
                  {
                      cin>>obj[i].x>>obj[i].y;
                                               }
                  sort(obj+1,obj+n+1,issort);                                                    
                  bool visited[n+1];
                  lli loc=1;
                  float distance[n+1];
                  for (lli i =1; i <=n; i++)
                  {
                     distance[i]=1000000000.00000000;
                                               }

                  equation eq[n];
                  memset(visited,false,n+1);
                  for (lli i = 1; i <=n-1; i++)
                {
                     for (lli j =i+1; j <=n; j++)
                     {
                         if(abs(obj[i].x-obj[j].x)==abs(obj[i].y-obj[j].y))
                         {

                             lli tang=(obj[i].y-obj[j].y)/(obj[i].x-obj[j].x);
                              if(tang==-1||tang==1){
                                    no_line++;
                                     visited[i]=visited[j]=true;
                                     eq[loc].A=-tang;
                                     eq[loc].B=1;
                                     eq[loc++].C=tang*obj[i].x-obj[i].y; 

                              }
                         }

                     }
                     
                  }
                 /* cout<<"start";
                 // priority_queue<float> s;
                for (lli i = 1; i <=n; i++)
                {
                    cout<<obj[i].x<<" "<<obj[i].y<<endl;
                }*/
                
               //  cout<<"end"<<endl; 
                  if(no_line==n-1){ float max=0.00000;
                  for(lli i=1;i<=n;i++){
                      if(!visited[i]){float min=10000000.0000000,a=0.000000;
                       for(lli j=1;j<loc;j++){ 
                        a=abs(eq[j].A*obj[i].x+eq[j].B*obj[i].y+eq[j].C);
                       a=a/sqrt(eq[j].A*eq[j].A+eq[j].B*eq[j].B);
                      
                      if(min>a)
                         min=a;}
                         if(max<min)
                         max=min;
                     

                  }
                  } 
                     max*=sqrt(2);
                  cout<<max<<endl;
                   }
                  else{
                     for(lli i=2;i<=n-1;i++){
                             float midx1=0.000000,midy1=0.000000;
                             float midx2=0.000000,midy2=0.000000;

                             midx2=obj[i].x+obj[i+1].x;
                             midx2/=2;
                              midy2=obj[i].y+obj[i+1].y;
                             midy2/=2;
                              midx1=obj[i-1].x+obj[i].x;
                             midx1/=2;
                              midy1=obj[i].y+obj[i-1].y;
                             midy1/=2;
                           //   cout<<midx1<<" "<<midy1<<endl;
                             // cout<<midx2<<" "<<midy2<<endl;
                             float c1=midy1-midx1;
                             float c2=midy2-midx2;
                             if(!visited[i-1]) {
                             distance[i-1]=abs(obj[i-1].x-obj[i-1].y+c1);
                             //cout<<"i"<<dd<<endl;
                             distance[i-1]/=sqrt(2);
                             float tmp=abs(obj[i-1].x+obj[i-1].y-midx1-midy1);
                              tmp/=sqrt(2);
                              if(distance[i-1]>tmp)
                               distance[i-1]=tmp;
                              }
                              if(!visited[i]) {
                             distance[i]=abs(obj[i].x-obj[i].y+c1);
                            // cout<<"i"<<distance[i]<<endl;
                             distance[i]/=sqrt(2);
                             float tmp=abs(obj[i].x+obj[i].y-midx1-midy1);
                              tmp/=sqrt(2);
                              if(distance[i]>tmp)
                               distance[i]=tmp;
                               float zz=0.000000,yy=0.000000;
                               zz=abs(obj[i].x-obj[i].y+c2);
                               zz/=sqrt(2);
                               yy=abs(obj[i].x+obj[i].y-midx2-midy2);
                               yy/=sqrt(2);
                               if(zz<yy)
                               yy=zz;
                              if(distance[i]>yy)
                               distance[i]=yy;

                              }
                              
                              if(!visited[i+1]) {
                             distance[i+1]=abs(obj[i+1].x-obj[i+1].y+c2);
                             distance[i+1]/=sqrt(2);
                             float tmp=abs(obj[i+1].x+obj[i+1].y-midx2-midy2);
                              tmp/=sqrt(2);
                              if(distance[i]>tmp)
                               distance[i]=tmp;
                              
                              }

                             
                         }float max=0.000000;
                         for (lli i = 1; i <=n; i++)
                         {
                         // cout<<distance[i]<<" ";
                              if(!visited[i]){
                             if(distance[i]>max)
                                max=distance[i];

                         }
                           // cout<<max<<" ";
                         }max*=sqrt(2);
                         cout<<max<<endl;
                         
                         
                     }
                  
                 
                 // cout<<ans*sqrt(2)<<endl;
        
        }return 0;}







 