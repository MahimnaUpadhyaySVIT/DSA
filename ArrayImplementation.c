#include<stdio.h>
#define size 10

void main(){
	int array[size], i, value, n=size, position;

	printf("Enter the elements of the array: ");
	for(i=0; i<size; i++){
		scanf("%d", &array[i]);
	}

	printf("Printing the elements of the array: \n");
	for(i=0; i<size; i++){
		printf("%d \n", array[i]);
	}

	printf("Searching element at particular position of the array: \n");
	printf("Enter the position: \n");
	scanf("%d", &position);

	for(i=0; i<size; i++){
		if(position < 0 || position > size)
			printf("Invalid position");
		else{
			value = array[position];
		}
	}
	printf("%d \n", value);

	printf("Deleting element at particular position of the array: \n");
	printf("Enter the position: \n");
	scanf("%d", &position);

	for(i=position; i<n-1; i++){
		if(position < 0 || position > size)
			printf("Invalid position");
		else{
			array[i] = array[i+1];
		}
		n--;
	}

	printf("Printing the elements of the array after deletion: \n");
	for(i=0; i<size; i++){
		printf("%d \n", array[i]);
	}
}
