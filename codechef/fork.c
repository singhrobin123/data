#include<stdio.h>
#include<stdlib.h>
int main()
{
    int pid,pid1,pid2,pid3,pid4;
    pid=fork();
    if(pid==0)
    {
        sleep(2);
        printf("child 2 with id %d and parrent id %d\n",getpid(),getppid());
    }  
    else
    {
        pid1=fork();
        if(pid1==0)
        {
            sleep(1);
            printf("child 1 with id %d and parrent id %d\n",getpid(),getppid());
        }
        else
        {
            pid2=fork();
            if(pid2==0)
            {
                sleep(3);
                pid3=fork();
                if(pid3==0)
                {
                    sleep(4);
                    printf("child 2 with id %d and parrent id %d\n",getpid(),getppid());
                }
                else
                {
                      pid4=fork();
                  if(pid4==0)
                 {
                    sleep(3);
                     printf("child 1 with id %d and parrent id %d\n",getpid(),getppid());
                    }   
                    else
                    {
                        sleep(5);
                        printf(" parrent id %d\n",getpid());
                    }
                    
                }
                
            }
            
        }
        
    }

  return 0;  
}