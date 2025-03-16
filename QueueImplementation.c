#include<stdio.h>
#define size 10
int queue[size], front=-1, rear=-1;

void enqueue(int x);
void dequeue();
void display();

int main(){
	int choice, value;

	while(1){
		printf("\n QUEUE OPERATION \n");
		printf("\n 1. Enqueue \n 2. Dequeue \n 3. Display \n 4. Exit");
		printf("\n Enter choice: ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				printf("Enter the value: ");
				scanf("%d", &value);
				enqueue(value);
				break;

			case 2:
				dequeue();
				break;

			case 3:
				display();
				break;

			case 4:
				printf("Exiting program...");
				return 0;
	
			default:
				printf("Invalid choice");
		}
	}
}

void enqueue(int x){
	if(rear == size-1){
		printf("Queue Overflow");
	} else {
		if(front==-1)
			front=0;
		queue[++rear] = x;
		printf("%d is enqueue \n", x);
	}
}

void dequeue(){
	if(front==-1 || front>rear){
		printf("Queue Underflow");
	} else {
		printf("Dequeue element %d \n", queue[front++]);

		if(front>rear)
			front = rear - 1;
	}
}

void display(){
	if(front == -1){
		printf("Queue is empty");
	} else {
		for(int i=front; i<=rear; i++){
			printf("%d \n", queue[i]);
		}
	}
}
