#include <stdio.h>

int main(void) {
    freopen(__FILE__, "r", stdin);
    int c;
    while ((c = getchar()) != EOF) {
    	putchar(c);
    }
}
