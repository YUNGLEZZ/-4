#include <stdio.h>
double yr_to_day(double yr) {
    const int YR_TO_DY = 365;
    return yr * YR_TO_DY;
}
int main(void) {
    double yr = 0;
    while (scanf("%lf", &yr) == 1) {
        printf("%0.2lf\n", yr_to_day(yr));
    }
    return 0;
}