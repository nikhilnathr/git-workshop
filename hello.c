#include<stdio.h>

int add(int a, int b) {
  return a + b;
}

int main() {
	int sum = add(10, 10);
	printf("Hello World! %d \n", sum);
	return 0;
}
