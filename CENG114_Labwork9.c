#include <stdio.h>
#include <string.h>

char *shortest(const char sentence[]);

int main(void){
	
	//Question 1
/*	
	char word[70];
	int arr1[30],i,counter = 0,k,j,wordcounter = 0,s,ss;
	
	printf("Enter a sentence:\n");
	gets(word);
	k = strlen(word);
	
	ss = 0;
	
	for(i = 0;i<=k;i++){
		if(word[i] != ' ' && word[i] != '\0'){
			counter++;
			arr1[j] = counter;
			s++;
		}
		//I assigned an ss variable and make it to equal to s because i did not want to enter this else id statement in every blank. User may enter more than one blank charecter that's why i choosed a way like that.
		else if(word[i] == ' ' && s>ss){
			arr1[j] = counter;
			j++;
			counter = 0;
			wordcounter++;
			ss = s;
		}
		
		
	}
	
	for(i = 0;i<=wordcounter;i++){
		printf("Word %d:",i+1);
		for(j = 0;j<arr1[i];j++){
			printf("*");
		}
		printf("\n");
	}
	
*/	

/*
	//Question 2
	
	char word[10],sentence[70],sentence1[70],*senholder;
	int i,j = 0;
	
	printf("Enter a sentence:");
	gets(sentence);
	printf("\nEnter a word:");
	gets(word);
	
	strcpy(sentence1,sentence);
	
	//Because of you did not mention removing the word from the string i used strtok function. 
	senholder = strtok(sentence," ");
	
	//Part A:
	
	while(senholder != NULL){
		if(strcmp(senholder,word) == 0 && j == 0){
			senholder = strtok(NULL," ");
			j++;
		}
		printf("%s ",senholder);
		senholder = strtok(NULL," ");
	}
	
	//Part B:
	
	senholder = strtok(sentence1," ");
	while(senholder != NULL){
		if(strcmp(senholder,word) == 0){
			senholder = strtok(NULL," ");
		}
		printf("%s ",senholder);
		senholder = strtok(NULL," ");
		
	}
	
*/	


	//Question 3
	
	char sentence[70],*word;
	
	printf("Enter a sentence:");
	gets(sentence);
	
	word = shortest(sentence);
	
	
	printf("Shortest word in the sentence is %s",word);

	
	
		
	
}

char *shortest(const char sentence[]){
	int i,arr[30],k,j,endposition[30],counter;
	
	char *word;
	
	k = strlen(sentence);
	
	//I find length of the words in sentence in here.
	for(i = 0;i<=k;i++){
		if(sentence[i] != ' ' && sentence[i] != '\0'){
			counter++;
			arr[j] = counter;
		}
		else if(sentence[i] == ' '){
			arr[j] = counter;
			//With this endposition array i stocked in which index word is end.
			endposition[j] = i;
			j++;
			counter = 0;
			
		
		}	
	}
	
	int holder,posholder;
	//I declared arrays 0 charecters to 100 because i wanted to find which word is the shortest in the next for loop.
	for(i = 0;i<30;i++){
		if(arr[i] == 0){
			arr[i] = 100;
		}
	}
	
	holder = arr[0];
	posholder = 0;
	
	//With posholder variable i tried to find which word is the shortest. I stocked its word position in posholder.
	for(i = 0;i<30;i++){
		if(arr[i] < holder){
			holder = arr[i];
			posholder = i;
		}	
	}
	
	
	j = 0;
	if(posholder == 0){
		
		for(i = 0;i<endposition[0];i++){
			word[i] = sentence[i];
		}
		word[i+1] = '\0';
			
			
	}
	else{
		for(i = endposition[posholder-1];i<endposition[posholder];i++){
			word[j] = sentence[i];
			j++;
		}
		word[j] = '\0';
	}
	
	
	return word;
	

	
}

























