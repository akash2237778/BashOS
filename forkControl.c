#include  <stdio.h>
#include  <sys/types.h>

#define   MAX_COUNT  200

void  ChildProcess(void);                /* child process prototype  */
void  ParentProcess(void);               /* parent process prototype */

void  main(void)
{
     pid_t  pid;

     pid = fork();
     if (pid == 0) 
          ChildProcess();
     else 
          ParentProcess();
}

void  ChildProcess(void)
{
     int   i;
	int c = 0;

     for (i = 1; i <= MAX_COUNT; i++)
		for(c = 1; c <= i; c++){
	printf("*");
	}
          printf("   This line is from child, value = %d\n", i);
     printf("   *** Child process is done ***\n");
}

void  ParentProcess(void)
{
     int   i,c=0;

     for (i = 1; i <= MAX_COUNT; i++)
	 for(c = 1; c <= i; c++){
        printf("*");
        	}

          printf("This line is from parent, value = %d\n", i);
     printf("*** Parent is done ***\n");
}
