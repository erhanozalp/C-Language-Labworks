#include <stdio.h>

//Question 2's Functions
void reverse(int *palindrome);

void palindrome();

//Question 3's Function

void find_minmax(int *num1,int *num2,int *num3);

//Question 4's Function

void countMultiples(int a,int b,int *c); 

int main(){
	

	//Question 1
/*
	int var = 5;
	int *p;
	
	p = &var;
	
	printf("Var = %d \n",var);
	printf("Value of var = %d \n",*p);
	printf("Adress of var = %p \n",&var);
	printf("Adress of var = %p \n",p);
	printf("Value of p = %p \n",p);
	printf("Adress of p = %p \n",&p);
	
	//Question 2

	palindrome();

	//Question 3
	
	int a,b,c;
	
	printf("Please input 3 integers : \n");
	scanf("%d%d%d",&a,&b,&c);
	
	find_minmax(&a,&b,&c);
	
	printf("Largest number is: %d \n",a);
	printf("Smallest numebr is: %d \n",b);
*/
	//Question 4
int upper,divisor,counter;
	
	counter = 0;
	
	printf("Please input upper limit: \n");
	scanf("%d",&upper);
	printf("Please input divisor: \n");
	scanf("%d",&divisor);
	
	countMultiples(upper,divisor,&counter);
	
	printf("%d integer can be divided by %d between 0 and %d \n",counter,divisor,upper);
	
	//Question 4-Second Test
	
	printf("Please input upper limit: \n");
	scanf("%d",&upper);
	printf("Please input divisor: \n");
	scanf("%d",&divisor);
	
	countMultiples(upper,divisor,&counter);
	
	printf("%d integer can be divided by %d between 0 and %d \n",counter,divisor,upper);
	
	//I could declared a new counter for the question but i think you would like to make us understand how pointers upgrade themselves by saying call and test 2 times. That's why i did not declared a new counter and used the old one.

}

void reverse(int *palindrome){
	int reversed,n;
	
	while(*palindrome != 0){
		n = *palindrome % 10;
		reversed = reversed*10 + n;
		*palindrome = *palindrome / 10; 
	}
	
	*palindrome = reversed;
	
}

void palindrome(){
	int userint,y;
	
	printf("Please input an integer : \n");
	scanf("%d",&userint);
	
	y = userint;
	
	printf("Inputted value is : %d ",y);
	reverse(&userint);
	printf("and reversed value is : %d \n",userint);
	if(userint == y){
		printf("It's a palindrome number! \n");
	}
	else printf("It's not a palindrome! \n");
	
}

void find_minmax(int *num1,int *num2,int *num3){
	int max,min;
	
	if(*num1 > *num2 && *num1 > *num3){
		max = *num1;
	}
	else if(*num2 > *num1 && *num2 > *num3){
		max = *num2;
	}
	else if(*num3 > *num2 && *num3 > *num1){
		max = *num3;
	}
	
	if(*num1 > *num2 && *num3 > *num2){
		min = *num2;
	}
	else if(*num1 > *num3 && *num2 > *num3){
		min = *num3;
	}
	else if(*num3 > *num1 && *num2 > *num1){
		min = *num1;
	}
	
	*num1 = max;
	*num2 = min;
	
}

void countMultiples(int upper,int divisor,int *c){
	int a,i;
	
	a = *c;
	
	for(i = 1;i <= upper;i++){
		
		if(i % divisor == 0){
			a += 1;
		}
	}
	
	*c = a;
}














