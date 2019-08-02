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
int subString(string s, int n) 
{ int count=0;
	for (int i = 0; i < n; i++) 
		{for (int len = 1; len <= n - i; len++) 
			{//cout << s.substr(i, len) << endl;
            string str=s.substr(i, len);
            int p=std::count(str.begin(),str.end(),'1');
            int q=std::count(str.begin(),str.end(),'0');
            if(q==(p*p)){count++;//cout<<s.substr(i, len)<<endl;
            }
            }
        }
return count;
}


        int main()
        { 
          
          int t;cin>>t;
        while(t--){int n;
        //cin>>n;
        string s;
        cin>>s;
       cout<< subString(s,s.length())<<endl;
        
       
        }
            return 0;
        }







 