#include <stdlib.h>
#include <stdio.h>

int callee(int a, int b, int c) {
	return a+b+c;
}

int main() {
    int temp = callee(1,2,3);
    printf("number: %d\n",temp);
}
