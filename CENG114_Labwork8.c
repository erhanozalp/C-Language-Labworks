#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Erhan Özalp 201911047

//Question 1's Function

double **change(double arr[3][3],int size);

//Question 3's Function

int **third(int size);

int main(){
	
	//Question 1

	double arr[3][3],size;
	
	int i,j;
	
	for(i = 0;i<3;i++){
		printf("Please input the %dth row: \n",i+1);
		for(j = 0;j<3;j++){
			scanf("%lf",&arr[i][j]);
		}
	}
	
	size = 3;
	
	change(arr,size);
	
	printf("New array: \n");
	
	for(i = 0;i<3;i++){
		for(j = 0;j<3;j++){
			printf("%3.2lf  ",arr[i][j]);
		}
		printf("\n");
	}
	
	

	//Question 2
/*	
	int arr2[2][4],arr3[2][4];
	
	int i,j,row,column;
	
	row = 0;
	column = 0;
	
	for(i = 0;i<2;i++){
		printf("Please input the %d.th column of the first array: ",i+1);
		for(j = 0;j<4;j++){
			scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0;i<2;i++){
		printf("Please input the %d.th column of the second array: ",i+1);
		for(j = 0;j<4;j++){
			scanf("%d",&arr3[i][j]);
		}
		printf("\n");
	}
	
	printf("The first array: \n");
	for(i = 0;i<2;i++){
		for(j = 0;j<4;j++){
			printf("%d  ",arr2[i][j]);
		}
		printf("\n");
	}
	
	printf("The second array: \n");
	for(i = 0;i<2;i++){
		for(j = 0;j<4;j++){
			printf("%d  ",arr3[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0;i<2;i++){
		for(j = 0;j<4;j++){
			if(arr2[i][j] != arr3[i][j]){
				row = i+1;
				column = j+1;
				break;
			}
		}
	}
	
	printf("First difference between first array and second array is at %d th row and %d th column",row,column);
	
	
*/	
	//Question 3
/*	
	int i,j,x,**z;
	
	printf("Welcome to the Sayisal Loto Game \n");
	printf("Please input how many row do you want to add: \n");
	
	scanf("%d",&x);
	
	z = third(x);

	for(i = 0;i<x;i++){
		printf("Column %d: ",i+1);
		for(j = 0;j<6;j++){
			printf("%d  ",z[i][j]);
		}
		printf("\n");
	}
*/	
	
	
	return 0;
}

double **change(double arr[3][3],int size){
	int i,j;
	
	for(i = 0;i<size;i++){
		if(i == 0){
			for(j = 0;j<size;j++){
				arr[i][j] = arr[i][j]*2;
			}
		}
		else if(i == 1){
			for(j = 0;j<size;j++){
				arr[i][j] = arr[i][j]/2;
			}
		}
		else if(i == 2){
			for(j = 0;j<size;j++){
				arr[i][j] = arr[i][j]-1;
			}
		}
	}
	
	return arr;
	
	
}


int **third(int size){
	srand(time(NULL));
	int i,j,**arr;
	
	arr = malloc(sizeof(int*) * size);
	
	for(i = 0;i<size;i++){
		arr[i] = malloc(sizeof(int*)*6);
	}
	
	for(i = 0;i<size;i++){
		for(j = 0;j<6;j++){
			arr[i][j] = 1 + rand() % 49;
		}
	}
	
	return arr;
}




















