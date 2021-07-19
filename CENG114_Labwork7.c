#include <stdio.h>
//Erhan Özalp 201911047


//Question 1's Function

int first(int a[],int size);

//Question 2's Function

void second(int a[]);

//Question 3's Functions

int mod(int a[]);

int median(int a[]);




int main(){
	
	//Question 1
/*	
	int i,n;
	
	printf("Enter n as a positive integer(n<100):\n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter %d integers:\n",n);
	
	for(i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	n = first(arr,n);
	
	printf("Number of elements between min and max : %d",(n-1));
	
	//Question 2

	int arr2[10];
	
	second(arr2);
	
	//Question 3
*/

	int arr3[10][30],i,j,average[11],k,mode[10],avg,med[11];
	
	for(i = 0;i<10;i++){
		for(k = 0;k<11;k++){
			average[k] = 0;
		}
		
		for(j = 0;j<30;j++){
			printf("Participant %d: What is your answer to question %d: \n",i+1,j+1);
			scanf("%d",&arr3[i][j]);
			
			switch(arr3[i][j]){
				case(0):
					average[0]++;
				case(1):
					average[1]++;
				case(2):
					average[2]++;
				case(3):
					average[3]++;
				case(4):
					average[4]++;
				case(5):
					average[5]++;
				case(6):
					average[6]++;
				case(7):
					average[7]++;
				case(8):
					average[8]++;
				case(9):
					average[9]++;
				case(10):
					average[10]++;
			}
			
			
					
			}
			
			mode[i] = mod(average);
			med[i] = median(average);
			
	}
	
	for(i = 0;i < 10;i++){
		avg = 0,
		printf("Average of the %d.th participant is ",i+1);
		
		for(j = 0;j<30;j++){
			avg = avg + arr3[i][j];
		}
		printf("%d\n",avg/30);
	}
	
	for(i = 0;i<10;i++){
		printf("Median of the %d.th participant: %d \n",i+1,med[i]);
	}
	for(i = 0;i<10;i++){
		printf("Mode of the %d.th participant: %d \n",i+1,mode[i]);
	}
	

	

	//Question 4
/*	
	int i,j,arr4[4][4],temp;
	
	for(i = 0;i<4;i++){
		printf("Please input %d. row: \n",i+1);
		for(j = 0;j<4;j++){
			scanf("%d",&arr4[i][j]);
		}
	}	
	
	for(i = 0;i<4;i++){
		for(j = i+1;j<4;j++){
			temp = arr4[i][j];
			arr4[i][j] = arr4[j][i];
			arr4[j][i] = temp;
		}
	}
	
	for(i = 0;i < 4;i++){
		for(j = 0;j<4;j++){
			printf("%d ",arr4[i][j]);
		}
		printf("\n");
	}
*/
	
	
	
	
}

int first(int a[],int size){
	int i,elements,max,min,locmax,locmin;
	
	max = a[0];
	locmax = 0;
	for(i = 1;i<size;i++){
		if(a[i] > max){
			max = a[i];
			locmax = i;
		}
		
	}
	min = a[0];
	locmin = 0;
	for(i = 1;i<size;i++){
		if(a[i] < min){
			min = a[i];
			locmin = i;
		}
	}
	
	if(locmax > locmin){
		elements = locmax - locmin;
	}
	else elements = locmin - locmax;
	
	return elements;
}

void second(int a[]){
	int i,unrepeated,j;
	
	printf("Please input the elements of the array:\n");
	for(i = 0;i<10;i++){
		scanf("%d",&a[i]);
	}
	
	for(i = 0;i<10;i++){
		if(a[i] != a[i-1] && a[i] != a[i+1]){
			printf("First unrepeated element of the array is: %d \n",a[i]);
			break;
		}
		
	}
}

int mod(int a[]){
	int i,j,max;
	
	max = a[0];

	for(i = 1;i<11;i++){
		if(a[i] > max){
			max = a[i];
		}
	}
}

int median(int a[]){
	int i,pass,holder,b[11],re;
	
	for(pass = 1;pass < 11;pass++){
		for(i = 0;i<10;i++){
			
			if(a[i] > a[i+1]){
				holder = a[i];
				a[i] = a[i+1];
				a[i+1] = holder;
			}
		}
	}
	
	for(i = 0;i<11;i++){
		b[i] = a[i];
	}
	
	re = b[6];
	
	return re;
	

	
	
	
}










































