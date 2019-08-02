#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<ll, ll > pll;
typedef vector<pll > vpll;
typedef vector<ll> vll;

struct p{
    string s;
  ll i,j;
};


#define rep(i,a,b) for(i=a;i<b;i++)
#define repr(i,a,b) for(i=a;i>=b;i--)

#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define popb  pop_back
#define mem(a,b) memset(a,b,sizeof(a))
#define sz size()
#define MOD 998244353
#define PI 3.14159265
bool isPalindrome(string str) 
{ 
   /* int len = str.length(); 
  
    for (int i = 0; i < len/2; i++ ) 
        if (str[i] != str[len-i-1]) 
            return false; */
            if (str == string(str.rbegin(), str.rend())) {
                  return true;
}
  
    return false; 
} 

 ll checkPalindromePair(p vect[],ll n) 
{ ll count=0;

    for (int i = 0; i< n-1; i++) 
    { 
        for (int j = n-1; j>=0 ; j--) 
        { 
            string check_str = ""; 
            if(vect[i].i<vect[j].i&&vect[i].j<vect[j].j&& vect[i].j<vect[j].i)
            {
            
            check_str = check_str + vect[i].s + vect[j].s; 
  
           
            if (isPalindrome(check_str)) 
               count++; 

                
        }else {break;} }
    }// cout<<endl;
    return count; 
} 

void subString(string s, ll n)  
{ ll tot=(n+1)*n;
     tot=tot/2;
     p q[tot];
   ll st=0;
    for(ll i = 0; i < n; i++)
    { for(ll j = 1; j <=n-i; j++)
    {     string str=s.substr(i, j);
            if(str.size()==1)
            {q[st].s=str;q[st].i=i;q[st++].j=i;}
            else
            {q[st].s=str;q[st].i=i;q[st++].j=i+str.size()-1;}
    }
    }
  /*  for(ll i = 0; i < st; i++)
    {
    cout<<q[i].s<<"  "<<q[i].i<<" "<<q[i].j<<endl;
    }*/
    cout<<checkPalindromePair(q,st)<<endl;
       }
  
 
int main()  
{ ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
    
    ll n;
    string s;
    cin>>s;
    n=s.size(); 
    subString(s,n);
    return 0; 
} 