#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Erhan Özalp 201911047

//Question 1's Function

void first();

//Question 2's Function

void second(int a[]);

//Question 3's Function

int third(int a[],int size);

//Question 4's Functions

void findFrequency(int a[],int b[],int size);

void findMode(int a[],int size);


int main(){
	
	//Question 1
/*	
	first();
*/	
	//Question 2
/*
	int a2[10],i;
	
	printf("Please input elements of the array:\n");
	for(i = 0;i<10;i++){
		scanf("%d",&a2[i]);
	}
	
	second(a2);
	
	printf("Factorials:  ");
	
	for(i = 0;i<10;i++){
		printf("%d  ",a2[i]);
	}
	
*/
	//Question 3
/*	
	int i,a3[10],result;
	
	printf("Please input elements of the array:\n");
	for(i = 0;i<10;i++){
		scanf("%d",&a3[i]);
	}
	
	result = third(a3,10);
	
	printf("There are %d inversions.\n",result);
*/	
	
	
	
	
	//Question 4
/*	
	int a4[100],i,frequency[10];
	
	for(i = 0;i<10;i++){
		frequency[i] = 0;
	}
	
	srand(time(NULL));
	
	for(i = 0;i<100;i++){
		a4[i] = 1 + rand() % 10;
	}
	
	findFrequency(a4,frequency,100);
	
	findMode(frequency,10);
*/	
	
	

	
	
	
}

void first(){
	
	int a1[10],i,j,counter;
	
	printf("Please input the elements of the array: \n");
	for(i=0;i<10;i++){
		scanf("%d",&a1[i]);
	}
	
	j = 1;
	
	counter = 0;
	
	for(i = 0;i<9;i++){
		if(a1[j]>a1[i]){
			counter++;
		}
		
		j++;
		
	}
	
	if(counter == 9){
		printf("Number are in ascending order!\n");
		
	}
	else printf("Numbers are not in ascending order!\n");
}

void second(int a[]){
	
	int i,j,fact,sum;
	
	for(i = 0;i<10;i++){
		if(a[i] == 0){
			fact = 0;
		}
		else if(a[i] == 1){
			fact = 1;
		}
		else if(a[i]<0){
			printf("Error!! Negative integers have no factorial please try again!\n");
			break;
		}
		else{
			j = (a[i]-1);
			
			fact = a[i];
			
			while(j>0){
				fact = fact*j;
				j--;
			}
			
		}
		
		a[i] = fact;
		
	}
	
}

int third(int a[],int size){
	int i,counter,b,j;
	counter = 0;

	for(i = 0;i<size-1;i++){
		for(j = i+1;j<size;j++){
			if(a[i]>a[j]){
				counter++;
			}
		}
	}
	
	
	return counter;
	
}

void findFrequency(int a[],int b[],int size){
	int i,j,counter = 1;
	
	for(i = 0;i<10;i++){
		for(j = 0;j<size;j++){
			if(a[j] == counter){
				b[i] += 1;
			}
		}
		counter++;
	}
	printf("Score		Frequency		Histogram\n");
	for(i = 0;i<10;i++){
		printf("%d		%d",(i+1),b[i]);
		printf("		");
		for(j = 0;j<b[i];j++){
			printf("*");
		}
		printf("\n");
	}
	
}

void findMode(int a[],int size){
	
	int i,hold,b,c = 0,count;
	
	hold = a[0];
	b = 1;	
	for(i = 0;i<(size-1);i++){
		if(hold > a[i+1]){
			//I assign a random job to not let the if statement empty. c = 0 assignment meant nothing.
			c = 0;
		}
		else if(hold == a[i+1]){
			c++;
			count = i+2;
		}
		else{
			hold = a[i+1];
			b = (i+2);
		}
	
	}	
	if(c>0){
		printf("There are two modes and they are %d and %d. They occured %d times.\n",b,count,hold);
		
	}
	else printf("Mode value is %d. It occured %d times.\n",b,hold);
	
}











































