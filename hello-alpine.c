#include <stdio.h>

/*
HOWTO in Alpine: 
1) install gcc as 'apk add --no-cache build-base'
2) compile it as 'gcc hello-alpine.c -o hello-alpine'
3) run it as './hello-alpine'
*/

int main() {
    puts("Hello there from Alpine!");
    return 0;
}
