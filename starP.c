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
	int p;
	char *star[200];
     for (i = 1; i <= MAX_COUNT; i++) {
//          sprintf(buf, "This line is from pid %d    %d, value = %d\n  ", c, pid, i);
                          if(pid == c){
					p=0;
				for(p = 0; p<=i ; p++){
					
					star[p] = "*"; 
}
                             sprintf(buf, "This line is from pid %d,     %c   value = %d (from parent)\n" , c, star[0] , i);    }

                               else{
                               sprintf(buf, "							This line is from pid %d, value = %d (from child)\n" , pid, i);
                                                  }
                               write(1, buf, strlen(buf));
                            }
}

