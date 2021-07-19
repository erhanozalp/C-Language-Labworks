#include <stdio.h>
//Erhan Özalp 201911047

//Question 1's Function

int *intersec(int a[],int size1,int b[],int size2,int *s); 

//Question 2's Fucntions

int *inputter(int *size);

int second(int a[],int size,int *pos,int *neg);

void third(int a[],int sizee);

int main(){
	
	//Question 1
/*	
	int i,n1,n2;
	
	printf("Please input n1(n<30):\n");
	scanf("%d",&n1);
	printf("Please input n2(n2<30):\n");
	scanf("%d",&n2);
	
	int a1[n1],b1[n2];
	
	printf("Please input elements of the first array:\n");
	
	for(i=0;i<n1;i++){
		scanf("%d",&a1[i]);
	}
	
	printf("Please input the elements of the second array:\n");
	
	for(i = 0;i<n2;i++){
		scanf("%d",&b1[i]);
	}
	
	int *n,*s;
	
	s = &n1;
	
	n = intersec(a1,n1,b1,n2,s);
	
	
	printf("Intersection of this arrays is/are:\n");
	
	for(i = 0;i<n1;i++){
		printf("%d\n",n[i]);
	}

	
	
*/	
	
	//Question 2
/*	
	int *p,size = 5,*sizer;
	
	sizer = &size;
	
	p = inputter(sizer);
	
	// Þimdi p benim arrayim oldu ve size da bu arrayin sizesi
	
	third(p,size);
*/
	
	//Question 3
	
	int i,a3[5],holder,j,temp;
	
	printf("Please input the elements of the array:\n");
	for(i = 0;i<5;i++){
		scanf("%d",&a3[i]);
	}

	//sort kýsmý
	
	for(i = 0;i<4;i++){
		holder = i;
		for(j = i+1;j<5;j++){
			if(a3[j] < a3[holder]){
				holder = j;
			}
		
		}
		
		temp = a3[holder];
		a3[holder] = a3[i];
		a3[i] = temp;
		

	}
	
	printf("Sorted arrays elements are: ");
	for(i = 0;i<5;i++){
		printf("%d ",a3[i]);
	}	
	
	return 0;
}

int *intersec(int a[],int size1,int b[],int size2,int *s){
	int i,j,counter = 0,intersection = 0,holder;
	static int inter[30];
	//Chapter a
	if(size1 == size2){
		for(i = 0;i<size1;i++){
			for(j=0;j<size2;j++){
				if(a[i] == b[j]){
					inter[counter] = a[i];
					counter++;
				}
			}
		}
	}
	//Chapter b
	else if(size1>size2){
		for(i=0;i<size2;i++){
			for(j = 0;j<size1;j++){
				if(b[i] == a[j]){
					inter[counter] = b[i];
					counter++;
				}
			}
		}
		
	}
	else{
		for(i=0;i<size1;i++){
			for(j = 0;j<size2;j++){
				if(a[i] == b[j]){
					inter[counter] = a[i];
					counter++;
				}
			}
		}
		
	}
	
	*s = counter;
	
	return inter;
}


int *inputter(int *size){
	int n,i;
	
	printf("Enter a positive integer n (n<100):\n");
	scanf("%d",&n);
	
	static int b[100];
	
	printf("Enter %d integer(s):\n",n);
	
	for(i = 0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	*size = n;
	
	return b;
	
	
}

int second(int a[],int size,int *pos,int *neg){
	int i,zero = 0,negative = 0,positive = 0;
	
	for(i = 0;i<size;i++){
		if(a[i] == 0){
			zero++;
		}
		else if(a[i] > 0){
			positive++;
		}
		else if(a[i] < 0){
			negative++;
		}
	}
	*pos = positive;
	*neg = negative;
	return zero;
	
}

void third(int a[],int sizee){
	int i,holder[100],zero,positive = 0,negative = 0;
	int counter = 0;
	
	int *p,*n;
	
	p = &positive;
	n = &negative;
	
	for(i = 0;i<sizee;i++){
		if(a[i] == 0){
			holder[counter] = i;
			counter++;		
		}
	}
	
	zero = second(a,sizee,p,n);
	
	printf("Number of negative integers : %d\n",negative);
	printf("Number of zero integers : %d\n",zero);
	printf("Number of positive integers : %d\n",positive);
	
	printf("Position of zero integers in the array : ");
	for(i = 0;i<counter;i++){
		printf("%d ",holder[i]);
	}
	
}



































