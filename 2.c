#include <stdio.h>
#include <stdint.h> 
int main(void) {
    uint32_t n = 0;
    scanf("%u", &n); 
    printf("%f\n", (float)n * (n + 1) / 2);
    printf("%llu\n", (unsigned long long)sizeof(n));
    printf("%llu\n", (unsigned long long)sizeof(float));
    printf("%llu\n", (unsigned long long)sizeof(int));
    return 0;
}