# include <stdio.h>
#include <stdlib.h>
int main(){
	
	int *ptr;
	ptr = malloc(sizeof(4));
	char ptr2=(char*)ptr1;

	*ptr=123; 
	ptr[0]=2;

	printf("%d\n",*ptr);
	printf("%d\n %c\n %c\n",ptr[0],ptr[1],ptr[2]);
	
	return 0;
}


