#include<stdio.h>

void pyramide();
void time();
int rule();
int operator_and();


int main(){
	
	//Question 1
	
	int a;
	
	printf("Please input n: \n");
	scanf("%d",&a);
	
	pyramide(a);
	
	//Question 2
	
	int second;
	
	printf("Please input seconds: \n");
	scanf("%d",&second);
	
	time(second);

	//Question 3
	
	int number,i,a1;
	
	for(i = 1; i <= 10;i++){
		printf("Input the number: \n");
		scanf("%d",&number);
		rule(number);
		
		if(rule == 1){
			a1++;
		}
		
		
	}
	printf("%d number(s) satisfy the rule. \n",a1);

	//Question 4
	int i1,j1;
	i1 = 1;
	
	for(j1 = 1;i1<=10;j1++){
		operator_and(i1,j1);
		if(j1 == 10){
			j1 = 0;
			i1++;
			if(i1 == 11){
				break;
			}
		}
		
		
	}
	

}

//Function of question 1
void pyramide(int n)
{
	int row,column;
	for(row = 1; row <= n;++row){
		for(column = 1; column <= row;++column){
			printf(" ");
		}
		for(column = 1; column <= ((2*n)-((2*row)-1));++column){
			printf("*");
		}
		printf("\n");
	}
}
//Function of question 2
void time(int var1)
{
	int day,hours,minutes,seconds,s;
	
	s = var1;
	day = var1 / 86400;
	var1 = var1 % (86400);
	hours = var1 / 3600;
	var1 %= 3600;
	minutes = var1 / 60;
	var1 %= 60;
	seconds = var1;
	
	printf("%d seconds is equal to %d day(s) %d hour(s) %d minute(s) %d second(s) \n",s,day,hours,minutes,seconds);
}
//Function of question 3
int rule(int n1)
{
	int b1,b2;
	
	b1 = n1 / 100;
	
	b2 = n1 % 100;
	
	if(n1 == pow((b1+b2),2)){
		return;
	}
	else return 0;
	
}
//Function of question 4
int operator_and(int var11, int var22)
{
	int c;
	
	c = var11&var22;
	
	printf("%d & %d = %d \n",var11,var22,(var11,var22));
	
	return c;
	
}













