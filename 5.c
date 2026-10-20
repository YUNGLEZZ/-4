#include <stdio.h>
double ma_to_a(double ma) {
    const int ABD = 1000;
    return ma / ABD;
}
int main(void) {
    double ma = 0;
    while (scanf("%lf", &ma) == 1) {
        printf("%0.2lf\n", ma_to_a(ma));
    }
    return 0;
}