def pr(s):
   if(a<1):
      return 1;
   else:
      return 0;
p=int(input())
i=0
for i in range(p):
       n,k=map(int,input().split())
       M=1000000007
       l=k-1;
       h=2*k
       c=k+n
       a=k-n
       if(pr(a)):
           print(l%M)
       else:
           x=a+n-1
           z=x//(n-1)
           sum=z*(2*a+(z-1)*(1-n))//2
           j=k+sum-1
           j=j%M
           print(j) 