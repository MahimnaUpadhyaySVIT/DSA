#include<stdio.h>
#define size 10
int stack[size], top=-1, i;

void push(int x);
void pop();
void peep();
void display();

int main(){
	int choice, value;

	while(1){
		printf("\n Stack Operation \n");
		printf("\n 1. Push \n 2. Pop \n 3. Peep \n 4. Display \n 5. Exit");
		printf("\n Enter your choice: ");
		scanf("%d", &choice);

		switch(choice){
			case 1:
				printf("Enter the value: ");
				scanf("%d", &value);
				push(value);
				break;

			case 2:
				pop();
				break;

			case 3:
				peep();
				break;

			case 4:
				display();
				break;

			case 5:
				printf("Exiting program.... \n");
				return 0;

			default:
				printf("Please enter valid option");
		}
	}
}

void push(int x){
	if(top == size-1){
		printf("Stack is overflow");
	} else {
		stack[++top] = x;
		printf("%d pushed into a stack \n", x);
	}
}

void pop(){
	if(top == -1){
		printf("Stack is underflow");
	} else {
		printf("%d popped element \n", stack[top--]);
	}
}

void peep(){
	if(top == -1){
		printf("Stack is underflow");
	} else {
		printf("%d is top element \n" , stack[top]);
	}
}

void display(){
	if(top == -1){
		printf("Stack is empty");
	} else {
		for (i=0 ; i<= top; i++){
			printf("%d \n", stack[i]);
		}
	}
}
