#include<stdio.h>
int main(){
	int a;
	int b;
	printf("Enter first side of rectangle : ");
	scanf("%d", &a);
	printf("Enter second side of rectangle : ");
	scanf("%d", &b);
    int c = 2*(a+b);
	printf("perimeter of rectangle is : %d", c);
	return 0;
}
