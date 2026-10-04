#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	int *ptr;
	float average;
	int sum=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	ptr =(int *)calloc(n,sizeof(int));
	if(ptr==NULL){
		printf("Failed\n");
		return 1;
	}
	printf("Array after calloc:");
	for(int i=0; i<n; i++){
		printf("%d ",ptr[i]);
	}
	printf("\n");
	printf("Enter %d integers:" , n);
	for(int i=0;i<n;i++){
		scanf("%d", &ptr[i]);
		sum+=ptr[i];
	}
	average=(float)sum/n;
	printf("Updated array:");
	for(int i=0;i<n;i++){
		printf("%d ", ptr[i]);
	}
	printf("\n");
	printf("Average of the array: %.1f\n",average);
	free(ptr);
	ptr=NULL;
	return 0;
}
	 
