#include<bits/stdc++.h>
using namespace std;
int findSum(int arrA[]){

        int n = 3;
        int totalSum = 0;

        for (int i = 0; i <n ; i++) {
            totalSum += arrA[i]*(n-i)*(i+1);
        }
        return totalSum;
    }
int main()
{
  
        int arrA[] = {1,2,3};
        int sum =findSum(arrA);
        cout<<"Sum of elements of sub arrays is: " << sum<<endl;
    
}
max pali
int lps(char *str) 
{ 
   int n = strlen(str); 
   int i, j, cl; 
   int L[n][n]; 
  
  
   
   for (i = 0; i < n; i++) 
      L[i][i] = 1; 
  
    
    for (cl=2; cl<=n; cl++) 
    { 
        for (i=0; i<n-cl+1; i++) 
        { 
            j = i+cl-1; 
            if (str[i] == str[j] && cl == 2) 
               L[i][j] = 2; 
            else if (str[i] == str[j]) 
               L[i][j] = L[i+1][j-1] + 2; 
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]); 
        } 
    } 
  
    return L[0][n-1]; 
}