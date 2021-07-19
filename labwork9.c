#include <stdio.h>

int main(){
	
	//Question 1
	
	int x,y,i,counter;
	counter = 0;
	
	for(i = 0; i < 10; i++)
	{
		printf("Input two integers: \n");
		scanf("%d%d",&x,&y);
		
		if(x > y){
			counter++;
		}
		
		
	}
	printf("The times that x>y is %d",counter);
	


	//Question 2
	
	int x,y,z,a;
	
	for(x = 1000; 1000<= x && x<=9999; x++){
		y = x/100;
		
		z = x % 100;
		
		if(x == y*y + z*z){
			printf("The integers that satisfy the rule are %d \n",x);
		}
		
	
	}
		

	//Question 3
	
	int x,y,e,a,b,c,d,i,F;
	a = 1;
	F = 1;
	c = 1;
	printf("Please input x and y: \n");
	scanf("%d %d",&x,&y);
	
	while(x>0 && y>0){
		F = 1;
		c = 1;
		
		e = x*y;
		
		if(e % 2 != 0){
			while(x>0){
				c = 3*c;
				x--;
				F = c*F;
				
			}
			printf("F = %d \n",c);
		}
		
		else if(e % 2 == 0){
			for(b = 1; y>0; y--){
				b = b*y;
				
			}
			printf("F = %d \n",b);
		}
		
		printf("Please input x and y: \n");
		scanf("%d %d",&x,&y);
		
		}
		
		printf("goodbye :)");

	//Question 4(check)
	
	int blank,row,countb;
	
	
	for(row = 1; row <= 10; row++){
		
		for(blank = 1; blank <= countb; blank++){
			printf(" ");
		}
		countb++;
		printf("***\n");
	
		
		
		
	}

		

	
	//Question 5
	
	int x,row,column;
	
	do{
		printf("Enter a number : \n");
		scanf("%d",&x);
		
		for(row = 1; row <= x; row++){
			for(column = x; column >= row; column--){
				printf("%d",column);
			}
			printf("\n");
			
		}
		
		
	}
	
	while(x > 0);
	printf("Goodbye!");

	
		
	
}
	
	
	
	
	
	
	
	
	
	
	

