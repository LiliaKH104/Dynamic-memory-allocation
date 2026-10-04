#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	int *ptr;
	int sum=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);

	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL){
		printf("Failed\n");
		return 1;
	}
	printf("Enter %d integers:", n);

	for(int i=0;i<n;i++){
		scanf("%d",&ptr[i]);
		sum+=ptr[i];
		
	}
	printf("\n");
	printf("Sum of array:%d \n", sum);
	free(ptr);
	ptr=NULL;
	return 0;
}
