#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	int highest;
	int lowest;
	printf("Enter the number of student:");
	scanf("%d",&n);
	int *grades= malloc(n*sizeof(int));
	if(grades==NULL){
		return 1;
	}
	printf("Enter the grades:\n");
	for(int i=0;i<n;i++){
		  scanf("%d",&grades[i]);

		if(i==0){
			highest=grades[i];
			lowest=grades[i];
		}

		if(grades[i]>highest){
			highest=grades[i];
		}
		if(grades[i]<lowest){
			lowest=grades[i];
		}
	}
	printf("Highest grade: %d \n", highest);
	printf("Lowest grade: %d\n", lowest);
	free(grades);
	return 0;
}


