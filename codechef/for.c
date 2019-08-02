#include<fcntl.h>
#include<stdio.h>
int main()
{

  pid_t p,p1,p2,p3,p4;
  printf("hello urvashi\n");
  int seq=0;
 // p=fork();
   //printf("fork= %d\n",getpid());
    //printf("pfork= %d\n",getppid());
   p1=fork();
    printf("fork1= %d\n",getpid());
     printf("pfork1= %d\n",getppid());
   if(p1==0){
    printf("child= %d\n",++seq);   
   }
   else{
       printf("parent= %d\n",++seq);
   }
   printf("both %d\n",++seq);
   return 0;}