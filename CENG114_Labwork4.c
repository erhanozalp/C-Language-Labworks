#include <stdio.h>

//Question 1's Function

void first();

//Question 2's Function

void second();

//Question 3's Function

void third();

//Question 4's Function

void fourth();

int main(){
	
	//Question 1
/*	
	first();
*/	
	//Question 2
	
	second();

	//Question 3
/*	
	third();
*/
	//Question 4
/*	
	fourth();	
*/	


	
	
	
	
	
	
	
	
	
	
	
	
}

void first(){
	int i,n,j;
	
	double a,q1[10];
	
	for(i = 0;i<10;i++){
		
		printf("Please input elements of the array: \n");
		scanf("%lf",&a);
		
		q1[i] = a;
		
	}
	
	printf("Please enter how many times you want to shift the array to the left side: \n");
	scanf("%d",&n);
	
	double temp[n];
	
	for(i = 0;i<n;i++){
		temp[i] = q1[i];
	}
	
	j = 0;
	
	for(i = n;i<10;i++){
		
		q1[j] = q1[i];
		
		++j;
	
		
	}
	j = 0;
	for(i = 10-n;i<10;i++){
		
		q1[i] = temp[j];
		j++; 
	}
	for(i = 0;i<10;i++){
		printf("%lf \n",q1[i]);

	}
}

void second(){

	int N,i,j,counter;
	
	printf("Please input how many elements will be stored in the array: \n"),
	scanf("%d",&N);
	
	int q2[N],occur[N];
	
	printf("Please input the elements of the array:\n");
	for(i = 0;i<N;i++){
		scanf("%d",&q2[i]);
		
		occur[i] = -28;
		
	}
	
	for(i = 0;i<N;i++){
		counter = 1;
		
		for(j = i+1;j<N;j++){
			
			if(q2[i] == q2[j]){
				counter++;
				occur[j] = 0;
			}
			
		}
		
		if(occur[i] != 0){
			occur[i] = counter;
		}
		
	}
	
	for(i = 0;i<N;i++){
		
		if(occur[i] != 0){
			printf("%d occurs %d time(s) \n",q2[i],occur[i]);
		}
	}
	
	
	
}


void third(){
	
	
	int q3[10],i,j,counter,temp;
	
	printf("Please input elements of the array: \n");
	
	for(i = 0;i<10;i++){
		scanf("%d",&q3[i]);
	}
	
	for(i = 0;i<10;i++){
		counter = 0;
		for(j = 0;j<10;j++){
			if(q3[i] < q3[j]){
				counter++;
				
				if(counter == 9){
					temp = q3[i];
					printf("Smallest number is in the array is %d \n",q3[i]);
				}
			}
		}
	}
	
	for(i = 0;i<10;i++){
		counter = 0;
		for(j = 0;j<10;j++){
			if(q3[i] < q3[j]){
				counter++;
				
				if(counter == 8 && q3[i] != temp){
					
					printf("Second smallest number is in the array is %d \n",q3[i]);
				}
			}
		}
	}
	
	
	
}

void fourth(){
	
	int q4[10],i,j,counter = 0,found;
	
	found = 0;
		
	printf("Please input the elements of the array: \n");
	
	for(i = 0;i<10;i++){
		scanf("%d",&q4[i]);
	}
	
	for(i = 0;i<10;i++){
		if(q4[i] != found){
			for(j = i+1;j<10;j++){
			
				if(q4[i] == q4[j]){
					found = q4[i];
				
				}
			
			}
		}
		
	}
	
	printf("The repeating element of the array is %d \n",found);


	
}
























