#include <stdio.h>

//Question 1's Function

void arrayy();

//Question 2's Function

void second();

//Question 3's Function

void third();

int main(){
	
	//Question 1
/*	
	arrayy();
*7
	//Question 2
/*
	second();
*/

	//Question 3
/*	
	third();
*/
	//Question 4
/*	
	int A[50],i,j,sum,counter;
	
	sum = 0;
	
	counter = 0;
	
	for(i = 0;i<50;i++){
		
		sum = sum + i;
		
		A[i] = sum;
	
	}
	
	for(i = 0; i < 10;i++){
		
		for(j = 0; j < 5;j++){
			printf("A[%d]=%d ",counter,A[counter]);
			counter++;
		}
		printf("\n");
	}
*/	
	
	
			
	

	
	
	
	
	
	
	
	
	
	
	
	
	
}

void arrayy(){
	
	int i,q1[10],a,sum,pr;
	
	a = 5;
	
	pr = 0;
	
	for(i = 0;i < 10;i++){
		
		q1[i] = a;
		
		a += 3;
		
	}
	
	sum = q1[1] + q1[4] + q1[8];
	
	for(i = 1;i<11;i++){
		printf("%d'th member of this array = %d \n",i,q1[pr]);
		pr++;
	}
	
	printf("Sum of second fifth and nineth members of this array %d \n",sum);
	
	
	
}

void second(){
	
	double a,q2[10],average,sum,b;
	
	sum = 0;
	
	int i,counter,counter1,s,counter2;
	
	counter = 0;
	
	counter1 = 0;
	
	counter2 = 0;
	
	s = 1;
	
	for(i = 0; i < 10;i++){
		printf("Please input %d'th member of the array: \n",s);
		scanf("%lf",&a);
		
		q2[i] = a;
		
		sum = q2[i] + sum;
		
		s++;
		
	}
	
	average = sum / 10;
	
	for(i = 0;i<10;i++){
		if(q2[i] > average){
			counter1++;
		}
		
	}
	
	double q22[counter1];
	
	for(i = 0; i<10;i++){
		if(q2[i] > average){
			b = q2[i];
			
			q22[counter] = b;
			
			counter++;
		}
	}
	
	for(i = 1; i <= counter1;i++){
		printf("%d'th member of new array: %.1lf \n",i,q22[counter2]);
		counter2++;
	}
	
	
	
	
	
}

void third(){
	
	double q3[50];
	
	int a,i;

	
	for(i = 0; i < 25;i++){
		q3[i] = i*i;
	}
	
	for(i = 25; i < 50;i++){
		q3[i] = i*3;
	}
	
	for(i = 0;i < 10;i++){
		printf("%.1lf  ",q3[i]);
	}
	printf("\n");
	for(i = 10;i < 20;i++){
		printf("%.1lf  ",q3[i]);
	}
	printf("\n");
	for(i = 20;i < 30;i++){
		printf("%.1lf  ",q3[i]);
	}
	printf("\n");
	for(i = 30;i < 40;i++){
		printf("%.1lf  ",q3[i]);
	}
	printf("\n");
	for(i = 40;i < 50;i++){
		printf("%.1lf  ",q3[i]);
	}
	printf("\n");
}





















