#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    int a[n];
    for(i=1;i<=n;i++)
        cin>>a[i];
     for(k=1;k<=n;k++)
     {
         for(i=k;i<=n;i++)
         {
             for(j=k;j<=i;j++)
             {
                 cout<<a[j]<<" ";
             }
         cout<<endl;
         }
     }
    return 0;
}

vector<int> array;
/* ... initialization of array ... */
vector< vector<int> > subarray;
for(int start=0; start<array.size(); start++)
{
    for(int end=0; end<array.size(); end++)
    {
        vector<int> sub;
        for(int i=start; i<=end; i++)
        {
            sub.push_back(array[i]);
        }
        subarray.push_back(sub);
        sub.clear();
    }
}