#include <stdio.h>
#include <math.h>

//Question 2's functions definitions

void fun1(int a,int b);

void fun2(int *a,int *b);

//Question 3's function definition

void distance(double *kilometer,double *meter);

//Question 4's function definition

void remover(int *a,int *b);

int main(){
	
	//Question 1

	int a =5;
	int *p = &a;
	
	printf("%d %d\n",a,*p);
	printf("%p\n",p);// address of variable a
	
	a=6;
	printf("%d %d\n",a,*p);
	
	*p = 7;
	printf("%d %d\n",a,*p);
	(*p)++;
	printf("%d %d\n",a,*p);
	*p++;
	printf("%d %d\n",a,*p);
	
	printf("At first i thought both *p++ and (*p)++ would upgrade the value of variable a but when i tried to compile the code i understand that if we use (*p)++ it upgrades the value of a but if we use *p++ it upgrades the value of memory location which p holds.\n ");

	//Question 2
/*	
	int a, b;
	a=5;
	b=4;
	printf("In the main function => %d %d\n",a,b);
	
	fun1(a,b);
	
	printf("After the fun1 function => %d %d\n\n",a,b);
	
	fun2(&a,&b);
	
	printf("After the fun2 function => %d %d\n",a,b);
	
	printf("It worked exactly i ecpected. fun1 couldn't changed the values of a and b because fun1 uses local variables. It creates local variables that's why it couldn't change the values of a and b in the main function but in fun2 it uses references of the variables a and b and when we changed the values of a and b in fun2 it make them change in main function too because fun2 upgrades the values of a and b in memory location.\n");

	//Question 3
	
	double kilometer,holder,meter;

	
	printf("Please input the kilometer: \n");
	scanf("%lf",&kilometer);
	
	holder = kilometer;
	
	distance(&kilometer,&meter);
	
	printf("%.1lf kilometers equals %.1lf meters and %.1lf centimeters\n",holder,meter,kilometer);
	

	//Question 4
	
	int i,input,removed;
	
	for(i = 0;i < 5;i++){
		printf("Input an integer and number of digits to remove from it:\n");
		scanf("%d%d",&input,&removed);
		remover(&input,&removed);
		printf("%d is modified as %d\n",input,removed);
	}	
				
	
}

//Question 2's functions

void fun1(int a,int b){
	a=12;
	b=15;
	printf("In the function fun1 => %d %d\n\n",a,b);
}

void fun2(int *a,int *b)
{
	*a=12;
	*b=15;
	printf("In the function fun2 => %d %d\n",*a,*b);
}

//Question 3's function

void distance(double *kilometer,double *meter){
	
	double meter1,centimeter;
	
	meter1 = (*kilometer)*1000;
	
	centimeter = meter1*100;
	
	*kilometer = centimeter;
	
	*meter = meter1;
	
	
}

//Question 4's function

void remover(int *a,int *b){
	int holder;
	
	holder = *a/pow(10,*b);
	
	*b = holder;
		
}
	
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
