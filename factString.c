#include<stdio.h>


int main(int argc,char* argv[])
{
	int input=1;
	int i = 0;
	for ( i=0; i< argc ; i++){
		if (atoi(argv[i]) != 0 )
			{ input = atoi(argv[i]);}
		
	}
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

