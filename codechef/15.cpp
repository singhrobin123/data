#include<bits/stdc++.h>
using namespace std;
#define lli long long int
typedef pair<int, int> pairs; 
 
lli gcd(lli a,lli b){
    if(b==0)
       return a;
    return gcd(b,a%b);   }

void subseq(lli a[],lli n){
    lli x=pow(2,n);
    for (lli i = 1; i <x; i++)
    {
        for (lli j=0; j <n ;j++)
        {
           if(i&(1<<j))
           cout<<a[j]<<" ";
        }cout<<endl;
        
    }
}
void subarray(lli a[],lli n){
    for (lli i = 0; i < n; i++)
    {
       for (lli j =i;j<n; j++)
       {
          for (lli k= i; k<=j; k++)
          {
              cout<<a[k]<<" ";
          }
          cout<<endl;
          
       }
       
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<pairs> s;
     int t, n, j, i; 
    n = 6; 
    int a[] = { 2, 3, 1, 6, 5, 8, 10, 9 }; 
  
    sort(a, a + n); 
    for (i = 0; i < n - 1; i++) { 
        for (j = i + 1; j < n; j++) { 

            if (a[i] % 2 == 0 && a[j] % 2 == 0) { 
  
              cout<<a[i]<<" "<<a[j]<<endl;
                pairs x = make_pair(a[i], a[j]); 
  
                s.insert(x); 
            } 
        } 


    }    
    pair<int, int> x = make_pair(5,9);
    s.insert(x);
     x = make_pair(1,1);
    s.insert(x);
    
       size_t p=6000;
            size_t q=100;
         //   cout<<p<<" "<<q<<endl;

      // size_t n = std::count(s.begin(), s.end(), '_');
          /* for (auto itr = s.begin(); itr != s.end(); itr++) { 

             pairs x = *itr; 
             cout << "(" << x.first << ", "<< x.second << ")"<< " "; } */
vector<int> myvector{ 1, 2, 3, 4, 5 }; 
    myvector.pop_back(); 
    myvector.erase (myvector.begin());
  
    // Vector becomes 1, 2, 3, 4, 5, 6 
  
    for (auto it = myvector.begin(); it != myvector.end(); ++it) 
        cout << ' ' << *it; 


    return 0;

       }