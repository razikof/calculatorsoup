#include <stdio.h> // comments are easy though
#include <stdbool.h> // COMMENTS ARE EASY, C IS EASY
int x;
int y;
int op;

void getSmallInput(){
	printf("Input Operator \n");
	scanf("%d", &op);
}

void getInput(){
	printf("Input Number 1 \n");
	scanf("%d", &x);
	printf("Input Number 2 \n");
	scanf("%d", &y);
}
void calculateDiff() {
	getInput();
	int dif = x - y;
	printf("The Difference of x - y is: %d\n", dif);
}
void calculateSum() {
	getInput();
	int sum = x + y;
	printf("The sum of x + y is: %d\n", sum);
}
void calculateProduct(){
	getInput();
	int prd = x * y;
	printf("The product of x * y is: %d\n", prd);
}
void calculateDiv(){
	getInput();
	float div = (float) x / y;
	printf("The product of x / y is: %.1f\n", div);
}

int main() {
	getSmallInput();
	switch(op){
		case 1:
			calculateSum();
			break;
		case 3:
			calculateProduct();
			break;
		case 2: 
			calculateDiff();
			break;
		case 4:
			calculateDiv();
			break;
	}
}
                 