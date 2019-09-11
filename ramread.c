#include<stdio.h>


int main(int argc,char* argv[])
{

    int counter;
    int choice;
    char s[1000], r[1000];
    int begin, end, count = 0;
	int *p;
    printf("Program Name Is: %s",argv[0]);
    if(argc==1)
        printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
    if(argc>=2)
    {
	printf("\n Press.....");
	printf("\n 1. normal");
	printf("\n 2. reverse");
	printf("\n 3. Even");
	printf("\n 4. Odd");
	printf("\n 5. characterReverse");
	scanf("%d",&choice);
        printf("\nNumber Of Arguments Passed: %d",argc);
        printf("\n----Following Are The Command Line Arguments Passed----");

	switch(choice){
		case 1:
	        for(counter=0;counter<argc;counter++)
                printf("\nargv[%d]: %s",counter,argv[counter]);
		break;

		case 2:
	        for(counter=argc;counter>0;counter--)
                printf("\nargv[%d]: %s",counter,argv[counter]);
		break;

		case 3:
	        for(counter=0;counter<argc;counter++)
		{	        
		if(counter%2 == 0)
                printf("\nargv[%d]: %s",counter,argv[counter]);
		}

		break;

		case 4:
	        for(counter=0;counter<argc;counter++)
		{		
		if(counter%2 == 1)                
		printf("\nargv[%d]: %s",counter,argv[counter]);
		}		
		break;

		case 5:
	        for(counter=0;counter<argc;counter++)
		{
		
//			printf("%c", argv[counter][0]);                
  while (argv[counter][count] != '\0')
  {    count++;

   end = count - 1;
 
   for (begin = 0; ; begin++) {
      r[begin] = argv[counter][end];
      end--;
   }
 
   r[begin] = '\0';
 
   printf("%s", r);

}		}		
		break;

		default:
		printf("Incorrect Option");
		break;
}

    }
    return 0;
}

