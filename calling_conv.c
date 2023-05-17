#include <stdlib.h>
#include <stdio.h>

int myfunction(int a, int b, int c) {
	return a+b+c;
}

int main() {
    int temp = myfunction(1,2,3);
    printf("number: %d\n",temp);
}
