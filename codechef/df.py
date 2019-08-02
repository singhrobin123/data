import operator
def pr(a):
    s=1
    i=1
    for s in range(1000000000000000000):
      if i<m:
         if a[i][0]==a[i-1][0]:
             print(a[i][2])
             qq=list(map(int,input().split()))
         i+=1
      else:
         break
n,m=map(int,input().split())
rt=list(map(int,input().split()))
rt1=list(map(int,input().split()))
a=[]
for z in range(m):
    u,v=map(int,input().split())
    a.append([u,v,z+1])
a=sorted(a,key=operator.itemgetter(1))
a=sorted(a,key=operator.itemgetter(0))
pr(a)
print(-1)
if n%2==0:
    print('GC'*(n//2))
else:
    print('GC'*(n//2)+'G')