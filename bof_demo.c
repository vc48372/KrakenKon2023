#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[], char* enp[]) {
    char buf[200];
    puts("Enter your message:");
    printf("> ");
    fflush(stdout);
    fgets(buf,500,stdin);
    printf("You said: %s\n",buf);
    return 0;
}
