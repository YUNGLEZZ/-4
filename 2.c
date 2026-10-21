#include <stdio.h>
#include <stdint.h> 
int main(void) {
    uint16_t u, i;
    scanf("%hu %hu", &u, &i); 
    printf("%f\n", (float)u / (float)i);
    printf("%llu\n", (unsigned long long)sizeof(u));
    printf("%llu\n", (unsigned long long)sizeof(i));
    printf("%llu\n", (unsigned long long)sizeof(float));
    printf("%llu\n", (unsigned long long)sizeof(uint16_t));
    return 0;
}