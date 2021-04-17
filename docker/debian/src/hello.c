#include <stdio.h>

/*
HOWTO in Debian (stretch-slim): 
1) install gcc as 'apt-get install --no-install-recommends gcc libc6-dev'
2) compile it as 'gcc hello.c -o hello'
3) run it as './hello'
*/

int main() {
    puts("Hello there from Debian!");
    return 0;
}
