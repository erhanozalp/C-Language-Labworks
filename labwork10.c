#include<stdio.h>

int main(){
	
	//Question 1

	int i,j,row,column,n,blank,m = 1;
	
	printf("Please input n: \n");
	scanf("%d",&n);
	
	for(j = 1; j<=1;j++){
		printf("First Pattern\n");
		for(i = 1; i<=n; i++){
			printf("%d %d %d \n",i,(i*3),(i*5));
		}
		
		printf("Second Pattern\n");
		for(row = n; row>=1;row--){
			for(blank = 1; blank<=row-1;blank++){
				printf(" ");
			}
			for(column = 1;column <= m;column++){
				printf("%d",column);
			}
			printf("\n");
			m++;
			
		}
	}

	//Question 2

	int row,column,m,n,blank,row1,column1;
	
	printf("Please input n \n");
	scanf("%d",&n);
	
	for(row = 1; row <= n;row++){
		for(column = 1; column <= n-row;column++){
			printf(" ");
		}
		for(column = 1; column <= 2*row-1;column++){
			printf("*");
		}
		printf("\n");
	}




	
}
