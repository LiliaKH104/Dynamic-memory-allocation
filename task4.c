#include <stdio.h>
#include <stdlib.h>
int main(){
	char **strings=malloc(3*sizeof(char *));
	if(strings ==NULL){
		printf("failed");
		return 1;
	}
	for (int i=0;i<3;i++){
		strings[i]=malloc(51*sizeof(char));
		if(strings[i]==NULL){
			printf("Failed");
			return 1;
		}
	}
	printf("Enter 3 strings:");
	for(int i=0;i<3;i++){
		scanf("%50s",strings[i]);
	}
	printf("\n Strings \n");
	for(int i=0;i<3;i++){
		printf("%s\n",strings[i]);
	}
	
	char **temp=realloc(strings,5*sizeof(char *));
	if(temp==NULL){
		printf("Failed");
		for(int i=0;i<3;i++){
			free(strings[i]);
		}
		free(strings);
		return 1;
	}
	strings =temp;
	printf("Enter 2 more strings: ");
	for(int i=3;i<5;i++){
		strings[i]=malloc(51*sizeof(char));
		if(strings[i]==NULL){
			printf("failed");
			for(int j=0;j<i;j++){
				free(strings[j]);
			}
			free(strings);
			return 1;
		}
		scanf("%50s", strings[i]);
	}

	printf("\n All 5 strings: ");
	for(int i=0;i<5;i++){
		printf("%s  ",strings[i]);
	}
	 for (int i=0;i<5;i++){
                free(strings[i]);
        }

	free(strings);
	return 0;
}
		

