#include<stdio.h>


int main(int argc,char* argv[])
{
	printf("Enter in C");
	int input;
	 input = atoi(argv[1]);
	int i = 0;
	int result = 1;
	if(input >  0){
	for(i=input ; i>0 ; i-- ){
		result = result * i;
}
}else{
result = 1;
}
printf("%d",result);	
	
}

