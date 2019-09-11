#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>

#define   MAX_COUNT  200
#define   BUF_SIZE   100

void  main(void)
{
     pid_t  pid;
     int    i;
     char   buf[BUF_SIZE];
     int c;
     
    pid = getpid();
     c = (int) pid;
     fork();
     pid = getpid();
     for (i = 1; i <= MAX_COUNT; i++) {
//          sprintf(buf, "This line is from pid %d    %d, value = %d\n  ", c, pid, i);
		if(pid == c){
			sprintf(buf, "This line is from pid %d, value = %d (from parent)\n" , c, i);	}
          
		else{
			 sprintf(buf, "This line is from pid %d, value = %d (from child)\n" , pid, i); 
		}
	write(1, buf, strlen(buf));
     } 
}
