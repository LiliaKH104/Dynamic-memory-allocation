#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr=malloc(10*sizeof(int));
	if(ptr==NULL){
		return 1;
	}
	printf("Enter 10 integers:");
	for(int i=0;i<10;i++){
		scanf("%d",&ptr[i]);
	}
	int *temp=realloc(ptr,5*sizeof(int));
	if(temp==NULL){
		free(ptr);
		return 1;
	}
	else{
		ptr=temp;
	}
	printf("Array after resizing:");
	for(int i=0;i<5;i++){
		printf("%d ",ptr[i]);
	}
	printf("\n");
	free(ptr);
	return 0;
}




