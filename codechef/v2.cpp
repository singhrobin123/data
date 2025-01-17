#include <bits/stdc++.h> 
using namespace std; 
  
// Function to print permutations of string str 
// using next_permute() 
void permute(string str) 
{ 
    // Sort the string in lexicographically 
    // ascennding order 
    sort(str.begin(), str.end()); 
  
    // Keep printing next permutation while there 
    // is next permutation 
    do { 
       cout << str << endl; 
    } while (next_permutation(str.begin(), str.end())); 
} 
  
// Driver code 
int main() 
{ 
    string str = "CBA"; 
    permute(str); 
    return 0; 
} 

#include <stdio.h>

//function to print the array
void printarray(int arr[], int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

//function to swap the variables
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//permutation function
void permutation(int *arr, int start, int end)
{
    if(start==end)
    {
        printarray(arr, end+1);
        return;
    }
    int i;
    for(i=start;i<=end;i++)
    {
        //swapping numbers
        swap((arr+i), (arr+start));
        //fixing one first digit
        //and calling permutation on
        //the rest of the digits
        permutation(arr, start+1, end);
        swap((arr+i), (arr+start));
    }
}

int main()
{
    //taking input to the array
    int size;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    int i;
    int arr[size];
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    //calling permutation function
    permutation(arr, 0, size-1);
    return 0;
}