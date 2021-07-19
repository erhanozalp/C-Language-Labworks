#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Question 1 structure

struct city{
	char city_name[20];
	float low_temperature;
	float high_temperature;

};

//Question 2 structure

struct skater{
	char name[10];
	char country[10];
	double points[10];
	double average;
};

void f1(struct skater *a);

struct skater f2(struct skater arr[]);


int main(void){
	
	//Question 1
/*	
	typedef struct city city;
	int i;
	char *holder1;
	
	city arr[10],holder;
	
	for(i = 0;i<10;i++){
		printf("Enter city %d name:",i+1);
		scanf("%s",arr[i].city_name);
		printf("\nEnter %s's lowest temperature:",arr[i].city_name);
		scanf("%f",&arr[i].low_temperature);
		printf("\nEnter %s's highest temperature:",arr[i].city_name);
		scanf("%f",&arr[i].high_temperature);
	}
	
	holder1 = arr[0].city_name;
	holder.high_temperature = arr[0].high_temperature;
	
	for(i = 1;i<10;i++){
		if(arr[i].high_temperature > holder.high_temperature){
			holder.high_temperature = arr[i].high_temperature;
			holder1 = arr[0].city_name;
		}
	}
	
	printf("City has the highest temperature is %s",holder1);
*/	

	//Question 2  
	
	struct skater arr[5],winner,skaterHolder,*holder;
	int i,j;
	
	for(i = 0;i<5;i++){
		printf("Input %dth skaters name:",i+1);
		scanf("%s",arr[i].name);
		printf("\nInput %dth skaters country:",i+1);
		scanf("%s",arr[i].country);
		printf("\nInput %dth skaters points:",i+1);
		for(j = 0;j<10;j++){
			scanf("%lf",&arr[i].points[j]);
		}
		holder = &arr[i];
		f1(holder);
	}
	
	winner = f2(arr);
	
	printf("Winner skater's name is %s",winner.name);
	printf("\nWinner skater's country is %s",winner.country);
	printf("\nWinner skater's average is %.2lf",winner.average);
	
	return 0;
	
	
}

void f1(struct skater *a){
	int i;
	double sum = 0,avg;
	
	for(i = 0;i<10;i++){
		sum = sum + a->points[i];
	}
	
	avg = sum/10;
	
	a->average = avg;
		
}

struct skater f2(struct skater arr[]){
	struct skater a;
	double holder;
	int i,winner;
	
	holder = arr[0].average;
	winner = 0;
	for(i = 1;i<5;i++){
		if(arr[i].average > holder){
			holder = arr[i].average;
			winner = i;
		}
	}
	
	a = arr[winner];
	return a;
}




















