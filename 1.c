#include <stdio.h>
#define KOAF 1000
int main(void) {
    int total = 0, kg = 0, ton = 0;
    while(scanf("%d", &total)==1 && total >= 0) {
        kg = total % KOAF;
        ton = total / KOAF;
        printf("%d т %d кг\n", ton, kg);
    }
    return 0;
}

