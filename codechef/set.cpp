#include <bits/stdc++.h> 
using namespace std; 
  
typedef pair<int, int> pairs; 
set<pairs> s; 
  
void display() 
{ 
    int f = 0; 
    for (auto itr = s.begin(); itr != s.end(); itr++) { 
  
        f = 1; 
        pairs x = *itr; 
        cout << "(" << x.first << ", "
             << x.second << ")"
             << " "; 
    } 
  
    if (f == 0) 
        cout << "No valid pair\n"; 
} 
int main() 
{ 
    int t, n, j, i; 
    n = 6; 
    int a[] = { 2, 3, 1, 6, 5, 8, 10, 9 }; 
  
    sort(a, a + n); 
  
    for (i = 0; i < n - 1; i++) { 
        for (j = i + 1; j < n; j++) { 
  
            // check for even number 
            if (a[i] % 2 == 0 && a[j] % 2 == 0) { 
  
                // makes pairs of even numbers 
                pairs x = make_pair(a[i], a[j]); 
  
                // inserts into the set 
                s.insert(x); 
            } 
        } 
    } 
  
    // to display the pairs 
    display(); 
  
    // to clear the set 
    s.clear(); 
} 
