#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *password(char str[],int shift);


int main(void){
	
	//Question 1
/*	
	char str[100],strcpy[100],holder;
	
	int length,length1,i,j; 
	
	printf("Enter a string:");
	gets(str);
	
	length = strlen(str);
	
	holder = str[0];
	j = 1;
	strcpy[0] = holder;
	for(i = 1;i<length;i++){
		if(holder != str[i]){
			strcpy[j] = str[i];
			j++;
			holder = str[i];
		}
	}
	
	strcpy[j] = '\0';
	
	printf("\nModified string: %s",strcpy);
*/
	//Question 2
/*	 
	char str[100],strcpy[100];
	
	int i,j,length,checker;
	
	printf("Enter a string:");
	gets(str);
	
	length = strlen(str);
	
	j = 0;
	
	checker = 0;
	
	for(i = 0;i < length;i++){
		if(str[i] == '?'){
			if(checker == 0){
				checker++;
				strcpy[j++] = ' '; 
			}
			else continue;
			
		}
		else{
			strcpy[j++] = str[i];
			checker = 0;
		}
		strcpy[j] = '\0';
		
		
		
	}	
	
	printf("\nModified sentence:%s",strcpy);
	
*/	

	//Question 3
/*	
	char str[20],*passw;
	
	int shift,i,length;
	
	printf("Input a word:");
	gets(str);
	
	printf("Input shifting value:");
	scanf("%d",&shift);
	
	passw = password(str,shift);
	
	printf("\nPassword: %s",passw);
*/	
	//Question 4
	
	FILE *filep;
	filep = fopen("C:\\Users\\erhan\\OneDrive\\Masaüstü\\labworkler\\in.txt","r");
	
	int id,grade,ids[20],grades[20],counter,i = 0;
	double avg;
	avg = 0;
	counter = 0;
	
	if(filep == NULL){
		printf("File could not be found!");
	}
	else{
		printf("File is found!\n");
		
		while(fscanf(filep,"%d %d\n",&id,&grade) != EOF){
			avg = avg+grade;
			counter++;
			ids[i] = id;
			grades[i++] = grade;
			
		}
		avg = avg/counter;
		printf("Average grade: %.2lf\n",avg);
		
		printf("Student id's who has a grade above average:\n");
		for(i = 0;i<20;i++){
			if(avg<grades[i]){
				printf("Id: %d   Grade: %d\n",ids[i],grades[i]);
			}
		}
		
		
		
		
		
		
		
	}
	
	
	return 0;
	
}


char *password(char str[],int shift){
	int i;
	
	for(i = 0;i<strlen(str);i++){
		str[i] = str[i]+shift;
	}
	
	return str;
	
}







