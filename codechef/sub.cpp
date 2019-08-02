#include <string>
#include <iostream>

using namespace std;
long int SubArraySum( int arr[] , int n ) 
{ 
    long int result = 0; 
  
    // computing sum of subarray using formula 
    for (int i=0; i<n; i++) 
        result += (arr[i] * (i+1) * (n-i)); 
  
    // return all subarray sum 
    return result ; 
} 
  

int main()
{
    string s("hello hello hello hello robin");
    int count = 0;
    size_t nPos = s.find("hello", 0); // first occurrence
    while(nPos != string::npos)
    {
        count++;
        nPos = s.find("hello", nPos + 1);
    }

    cout << count;
};