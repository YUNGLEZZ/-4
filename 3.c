#include <stdio.h> 
int main(void) {
    int n = 0, sch = 0;
    long long kvt = 1;
    scanf("%d", &n);
    while (sch < n) {
        printf("%lld ", kvt);
        kvt = kvt * 1000;
        sch++;
    }
    printf("\n");
    return 0;
}
