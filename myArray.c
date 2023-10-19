#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void){
    srand(time(NULL));
	int min = 0;
	int max = 99;
	printf("\n------------- Arrays ------------\n\n");
	printf("Massiv 20 sels with random values: \n\n");
	int arr[100];
	for(int i = 0; i<100; i++){
		arr[i] = min + rand() % (max - min + 1);
	}
	printf("unsorted:\n");
	
	for(int i = 0; i < 100; i++){
		if( i % 10 == 0 ){ 
			if(i != 0)printf("\n");
		}
		printf("%4d",arr[i]);
	}
	for(int i = 0; i<100; i++){
		for(int j = 0; j < 100; j++){
		    if(arr[i]>arr[j]){
				arr[i] = arr[i] + arr[j];
				arr[j] = arr[i] - arr[j];
				arr[i] = arr[i] - arr[j];				
			}
		}
	}
	printf("\n\n");
	printf("sorted:\n");
	for(int i = 0; i < 100; i++){
		if( i % 10 == 0 ){ 
			if(i != 0)printf("\n");
		}
		printf("%4d",arr[i]);
	}
}