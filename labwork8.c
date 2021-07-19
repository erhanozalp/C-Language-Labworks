#include <stdio.h>

int main(){
	
	//Question 1
	
	int x,sum,bit,big,n,small;
	sum = 0;
	n = 10;
	bit = 0;
	big = 0;
	
	while(n>0)
	{
		printf("Please input 10 integer: \n");
		scanf("%d", &x);
		
		if(100<x && x<200)
			bit++;
		else if(x<100){
			sum = sum + x;
		}
		else if(x>200 && x%4 == 0){
			big++;
			
		}
		n--;
	}
	small = sum;
	printf("Number of the numbers between 100 and 200: %d \n",bit);
	printf("Sum of numbers smaller than 100: %d \n",sum);
	printf("Number of numbers which are > 200 and divisible by 4: %d",big);
	

	//Question 2
	
	int i,firstm,secondm,a;
	
	printf("Input 10 integers: \n");
	scanf("%d", &firstm);
	scanf("%d",&a);
	if(a < firstm){
		secondm = firstm;
		firstm = a;
	}
	else{
		secondm = a;
	}
	while(i<8){
		scanf("%d",&a);
		if (a <= firstm){
			secondm = firstm;
			firstm = a;
			if(a > firstm && a < secondm){
				secondm = a;
			}
		}
		i++;
		}
	printf("Second smallest number is %d",secondm);
	
	
	
	

	//Question 3
	
	int x,counter,sum;
	double average;
	
	counter = 0;
	sum = 0;
	
	while(1)
	{
		printf("Input x: \n");
		scanf("%d",&x);
		
		if(x >= 0){
			sum = sum + x;
			counter++;
			
		}
		else break;
		
	}	
	average = sum / counter;
	printf("Average : %.2lf",average);
	

	//Question 4
	
	int x,y,sum1,sum2,a,b;
	
	sum1 = 0;
	sum2 = 0;
	a = 1;
	b = 1;
	

	printf("Input first integer to control if it is amicable number or not with the second inputted number:\n");
	scanf("%d",&x);
		
	while(a < x){ //while(a < x diye kursak ne olur?)
		if(x % a == 0){
			sum1 = sum1 + a;
			}
		a++;
		
	}
		
	printf("Input second integer to control if it is amicable number or not with the first inputted number:\n");
	scanf("%d",&y);
	
	while(b < y){
		if(y % b == 0){
			sum2 = sum2 + b;
		}		
		b++;
	}
	
	if(sum1 == y && sum2 == x){
		printf("%d and %d are amicable",x,y);
	}
	else printf("%d and %d are not amicable",x,y);
	

	

	
	
	
	
	
	
	
	
	
	
	
	
}
