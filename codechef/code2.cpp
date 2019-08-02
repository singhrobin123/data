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
//typedef pair<int, int> pairs;
using namespace std;
struct mass
{
    lli x,y;
};
bool is(mass a,mass b){
    return a.x<b.x;
}

        int main()
        { 
            ios_base::sync_with_stdio(false);
		    cin.tie(NULL);
		   cout.tie(NULL);
        lli t;cin>>t;
        while(t--){
          //  vector<lli> k,coll;
          
               string s;
               cin>>s;
               if(s.size()==1)
               { if(s[0]=='F')
                  cout<<"1"<<endl;
                  else
                  {cout<<"2"<<endl;}}
                  else
                  { lli loc=0;
                  mass p[2*s.size()];
               string str1,str2;
               
                  for(lli i=0;i<s.size();i++){
                      str1=s;
                      str2=s;
                      if(s[i]=='F'){
                          str1[i]='R';
                          str2[i]='L';
                      }
                      else if(s[i]=='R'){
                          str1[i]='L';
                          str2[i]='F';
                      }
                      else
                      {
                          
                          str1[i]='R';
                          str2[i]='F';
                      }
                    
                      char mo='N';
                      lli x=0,y=0;
                   
                    for (lli p = 0; p <str1.size(); p++)
                    { 
                        if(str1[p]=='F'){
                            if(mo=='N')y++;
                            else if(mo=='S')y--;
                            else if(mo=='E')x++;
                            else if(mo=='W')x--;
                        }
                       else if(str1[p]=='R'){
                           //cout<<"CAT"<<endl;
                            if(mo=='N'){mo='E';}
                           else if(mo=='S'){mo='W';}
                           else if(mo=='E'){mo='S';}
                           else if(mo=='W'){mo='N';}
                        }
                       else if(str1[p]=='L'){
                            if(mo=='N'){mo='W';}
                            else  if(mo=='S'){mo='E';}
                            else if(mo=='E'){mo='N';}
                           else  if(mo=='W'){mo='S';}
                        }


                    }
                 p[loc].x=x;
                 p[loc++].y=y;
                    x=0,y=0;
                    mo='N';
                     for (lli p = 0; p <str2.size(); p++)
                    { //cout<<mo<<endl;
                        if(str2[p]=='F'){
                            if(mo=='N')y++;
                             else if(mo=='S')y--;
                             else if(mo=='E')x++;
                          else if(mo=='W')x--;
                        }
                        if(str2[p]=='R'){
                            if(mo=='N'){mo='E';}
                           else if(mo=='S'){mo='W';}
                           else if(mo=='E'){mo='S';}
                           else if(mo=='W'){mo='N';}
                        }
                        if(str2[p]=='L'){
                            if(mo=='N'){mo='W';}
                            else  if(mo=='S'){mo='E';}
                            else if(mo=='E'){mo='N';}
                           else  if(mo=='W'){mo='S';}
                        }

                      // cout<<x<<" "<<y<<endl;
                    }
                   p[loc].x=x;
                 p[loc++].y=y;
                    


                  }
        
      
    
  set<long long int> so;
  
  sort(p,p+loc,is);
  lli prev=p[0].x;
  lli prev1=p[0].y;
  for (lli i =0; i <loc; i++)
    {so.insert(p[i].x);}
   
 set<long long int> sot;

    lli f=0; lli count=0;
for (auto itr = so.begin(); itr != so.end(); itr++) { 
 for(lli pos=0;pos<loc;pos++){
     if(*itr==p[pos].x)
     sot.insert(p[pos].y);

 }
   count+=sot.size();
   sot.clear();   f++;
}     
       
 cout<<count<<endl;
                  }
        }  
            return 0;
        }







 