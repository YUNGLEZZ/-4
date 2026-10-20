#include <stdio.h>
int main(void) {
    int n, sch = 0;
    double itog = 1.0;
    scanf("%d", &n);
    while(sch < n) {
        itog *= 1000;
        sch++;
    }
    printf("%.6f\n", itog);
    return 0;
}