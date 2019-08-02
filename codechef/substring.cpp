#include<bits/stdc++.h>
#define lli long long int
using namespace std;
bool ispali(int n)
{
    stringstream ss;
    ss<<n;
    string input=ss.str();
    if (input == string(input.rbegin(), input.rend()))
    return true;
    return false;
}



        int main()
        {int s=100000;
            ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
        bool a[s];
        for (int i = 0; i <100000; i++)
        {
            if(ispali(i))a[i]=true;
            else
            {
                a[i]=false;
            }
            
        }
        int t;cin>>t;
        while(t--){int count=0;
            int x,b,c;cin>>x>>b>>c;
            for(int i=x;i<=b;i++){
                if(i>c&&a[i] )
                count++;
            }
        cout<<count<<endl;}
            
            return 0;
        }