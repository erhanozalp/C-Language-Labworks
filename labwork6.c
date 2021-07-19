#include <stdio.h>

int main(){
	
	//Question 1
/*	
	char x;
	int money,hour;
	
	
	printf("Please input the type of your car(c for car b for bus t for truck): \n");
	scanf("%c",&x);
	printf("Please input how many hours your car was in the parking lot");
	scanf("%d",&hour);
	
	if (x == 'c'){
		printf("The charge for the cars per hour is 2 TL\n");
		if (hour <= 1){
			money = 2;
			printf("Your debt is %d TL",money);
			}
		else if(hour > 1){
			money = hour*2;
			printf("Your debt is %d TL",money);
		}
   }
	else if(x == 'b'){
		printf("The charge for the busses per hour is 3 TL\n");
		if(hour <=1){
			money = 3;
			printf("Your debt is %d TL",money);
			}
		else if(hour > 1){
			money = hour*3;
			printf("Your debt is %d TL",money);
		}
   }
   else if(x == 't'){
		printf("The charge for the trucks per hour is 4 TL\n");
		if(hour<=1){
			money = 4;
			printf("Your debt is %d TL",money);
		}
		else if(hour > 1){
			money = hour*4;
			printf("Your debt is %d TL",money);
		}
		
		
	}	
*/
	//Question 2
/*
	int kilowatt,debt;
	
	printf("Please input your charge value: \n");
	scanf("%d",&kilowatt);
	
	if (kilowatt <= 300){
		debt = kilowatt*9;
		printf("Your debt is %d TL",debt);	
	}
	else if (300 < kilowatt && kilowatt <= 600){
		debt = 2700+((kilowatt-300)*8);
		printf("Your debt is %d TL",debt);		
	}
	else if(600 < kilowatt && kilowatt <= 1000){
		debt = 5100+((kilowatt-600)*6);
		printf("Your debt is %d TL",debt);
	}
	else if(kilowatt > 1000){
		debt = 7500+((kilowatt-1000)*5);
		printf("Your debt is %d TL",debt);
	}
*/
	//Question 3 check this "small" mistake
/*
	char project;
	int a,cost;
	
	printf("Please input the project type(Small=s,medium=m or large=l)\n");
	scanf("%c",&project);
	
	if(project == 's'){
		printf("Please input how many small project you want to be build\n");
		scanf("%d",&a);
		if(a < 3){
			printf("The cost per project for under 3 is 1500$ per project\n");
			cost = 1500*a;
			printf("Your debt is %d$",cost);
		}
		else if(3 <= a && a <= 5){
			printf("The cost per project between 3 and 5 is 1000$ per project\n");
			cost = 1000*a;
			printf("Your debt is %d$",cost);
		}
		else if(5 < a){
			printf("The cost per project higher than 5 is 750$per project");
			cost = 750*a;
			printf("Your debt is %d$",cost);
		}
	}
	else if(project == 'm'){
		printf("Please input how many medium project you want to be build\n");
		scanf("%d",&a);
		if(a < 3){
			printf("The cost per project for under 3 is 2500$ per project\n");
			cost = 2500*a;
			printf("Your debt is %d$",cost);
		}
		else if(3 <= a && a <= 5){
			printf("The cost per project between 3 and 5 is 2000$ per project\n");
			cost = 2000*a;
			printf("Your debt is %d$",cost);
		}
		else if(5 < a){
			printf("The cost per project higher than 5 is 1750$per project");
			cost = 1750*a;
			printf("Your debt is %d$",cost);
		}
	}
	else if(project == 'l'){
		printf("Please input how many large project you want to be build\n");
		scanf("%d",&a);
		if(a < 3){
			printf("The cost per project for under 3 is 4500$ per project\n");
			cost = 4500*a;
			printf("Your debt is %d $",cost);
		}
		else if(3 <= a && a <= 5){
			printf("The cost per project between 3 and 5 is 4000$ per project\n");
			cost = 4000*a;
			printf("Your debt is %d $",cost);
		}
		else if(5 < a){
			printf("The cost per project higher than 5 is 3500$per project\n");
			cost = 3500*a;
			printf("Your debt is %d $",cost);
		}
	}
	else printf("Error! Please input s m or l for project costs.");
*/

	//Question 4
	
	char fruit;
	int x,cost;
	
	printf("Please input the fruit name would you like to buy(a for apples,b for bananas and c for carrots)\n");
	scanf("%c",&fruit);
	printf("Costs are like this: Apple 10 cent, Banana 12 cent and Carrot 7 cent\n");
	//a)
	/*
	if(fruit == 'a'){
		printf("How many apple you want to buy:\n");
		scanf("%d",&x);
		cost = x*10;
		printf("Your debt is %d cent",cost);
	}
	else if(fruit == 'b'){
		printf("How many banana you want to buy:\n");
		scanf("%d",&x);
		cost = x*12;
		printf("Your debt is %d cent",cost);
	}
	else if(fruit == 'c'){
		printf("How many carrot you want to buy:\n");
		scanf("%d",&x);
		cost = x*7;
		printf("Your debt is %d cent",cost);
	}
	else printf("Invalid character choice! Please input the caharacters that program have told you!!!");
	*/
	//b)
	switch(fruit)
	{
		case('a'):
			printf("How many apple you want to buy:\n");
			scanf("%d",&x);
			cost = x*10;
			printf("Your debt is %d cent",cost);
			break;
		case('b'):
			printf("How many banana you want to buy:\n");
			scanf("%d",&x);
			cost = x*12;
			printf("Your debt is %d cent",cost);
			break;
		case('c'):
			printf("How many carrot you want to buy:\n");
	    	scanf("%d",&x);
			cost = x*7;
			printf("Your debt is %d cent",cost);
			break;
	}
			
		



























	return 0;

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

