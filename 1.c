#include <stdio.h>
#define KOAF 1000
int main(void) {
    int total = 0, kj = 0, mj = 0;
    while(scanf("%d", &total)==1 && total >= 0) {
        kj = total % KOAF;
        mj = total / KOAF;
        printf("%d мДж %d кДж\n", mj, kj);
    }
    return 0;
}