#include <stdio.h>
#include<string.h>

int main(){
	//Question 1
/*
	int x,sum,counter,average;
	counter = 0;
	sum = 0;
	printf("Input 10 integers: \n");
	
	while(counter < 10)
	{
		scanf("%d",&x);
		
		sum = sum + x;
		counter++;
		
	}
	average = sum / 10;
	
	printf("Sum of the integers is %d\n",sum);
	printf("Average of the integers is %d",average);
	

	//Question 2
	
	int x,sum,remainder;
	
	printf("Please input an integer\n");
	scanf("%d", &x);
	
	while(x != 0)
	{
		remainder = x%10;
		sum = sum + remainder;
		x = x/10;
	}
	
	printf("Sum of the digits is %d",sum);

	//Question 3
	
	int x,sum;
	
	x = 12;
	
	sum = 0;
	
	while(x<=421)
	{
		if(x%2 == 0){
			sum = sum + x;
			printf("Sum %d\n",sum);
			
			}
		x++;
	
	}
	
	printf("Sum of the numbers are %d",sum);

	//Question 4
	
	int x,counter,sum,average,even;
	sum = 0;
	counter = 0;
	even = 0;
	printf("Input 10 integers: \n");
	while(counter < 10)
	{
		scanf("%d",&x);
		counter++;
		
		if(x % 2 == 0){
			sum = sum + x;
			even++;
		}
		
	}
	average = sum / even;
	printf("Average of the even integers is %d",average);
*/
	//Question 5 check


	int n,youngm,olderf,averagef,averagem,fcounter,mcounter,sumf,summ,age;
	char gender;
	
	summ = 0;
	sumf = 0;
	fcounter = 0;
	mcounter = 0;
	olderf = 0;
	youngm = 0;
	
	printf("Input n: \n");
	scanf("%d", &n);
	
	while(n>0)
	{
		printf("Input employee information: \n");
		scanf(" %c %d",&gender,&age);
		
		if(gender == 'F'){
			fcounter++;
			sumf = sumf + age;
			if(age > 30){
				olderf++;
			}
		}
		else if(gender == 'M'){
			mcounter++;
			summ = summ + age;
			if(age < 50){
				youngm++;
			}
		}
		n--;
	}
	averagef = sumf / fcounter;
	averagem = summ / mcounter;
	printf("There exist %d female worker(s) older than 30\n",olderf);
	printf("There exist %d male worker(s) younger than 50\n",youngm);
	printf("Average age of female workers is %d \n",averagef);
	printf("Average age of male workers is %d \n",averagem);
/*
	//Question 6
	
	char c;
	int acounter,ecounter,ucounter,icounter,ocounter,n;
	
	printf("Input how many character you would like to input:\n");
	scanf("%d", &n);
	printf("Input %d characters:\n",n);
	
	while(n > 0)
	{
		n--;
		scanf("%s", &c);
		
		switch(c)
		{
			case('A'):
				acounter++;
				break;
			case('E'):
				ecounter++;
				break;
			case('U'):
				ucounter++;
				break;
			case('I'):
				icounter++;
				break;
			case('O'):
				ocounter++;
				break;
				
		}
	}

	
	printf("A repeated %d times\n",acounter);
	printf("E repeated %d times\n",ecounter);
	printf("U repeated %d times\n",ucounter);
	printf("O repeated %d times\n",ocounter);
	printf("I repeated %d times\n",icounter);
	*/

	
	
	
	

















	
}
