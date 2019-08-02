#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[ 20], count = 1, m, copy[20], maxarry[20], n, x, i, j, noe, sum, l, max;
  printf("\n ENter the no of elements.");
  scanf("%d", &n);
  printf("\n Enter array");
  for (i = 0; i < n; i++)
    scanf( "%d" ,&a[i]);
  for (i = 0; i < n; i++)
  {
    copy[i]=a[i];
  }
  for (i = 0; i < n; i++)
    printf("%d\n", a[i]);
 
  noe=2;
  max=0;
  //possible sub arrays is minimum 2 elements maximum n-1 elements so till noe value < n form sub arrays
  while(noe < n)
  {
    for (i = 0; i < n; i++)
    {
      for (j = i + 1; j < n; j++)
      {
        count = 1;
        //check the possibility of an index j to form sub array
        if ((n - j) >= (noe - 1))
        {
          printf("%d,", a[i]);
          x = j;
          sum = a[i];
          while (count < noe)
          {
            count++;
            printf("%d,", copy[x]);
            sum += copy[x];
            x++;
          }
          printf("---%d", sum);
          if (sum > max)
          {
            maxarry[0] = a[i];
            for (l = 1, m = j; m++)
              maxarry[l]=c[m];
              max = sub;
          }
          printf("\n");
        }
      }
    }
    k++;
  }
  printf("sub array with max sum");
  for (i = 0; i < l; i++)
    printf("%d,", maxarray[i]);
  printf("-----%d", max);

}
