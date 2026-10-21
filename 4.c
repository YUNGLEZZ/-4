#include <stdio.h>
int main(void) {
    int n, a1, a2;
    int itog = 0;
    scanf("%d", &n);
    while(n > 0) {
        a1 = n % 10;
        a2 = n / 10;
        itog = itog * 10 + a1;
        n = n / 10;
    }
    printf("%d\n", itog);
    return 0;
}