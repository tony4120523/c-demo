#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void pBits(unsigned int n, int* cDigit) 
{
    if (n) {
        (*cDigit)++;
        pBits(n >> 1, cDigit);
        if (*cDigit % 4 == 0)
            printf(" ");
        (n & 1) == 1 ? printf("1") : printf("0");
        (*cDigit)--;
    } else {
        return;
    }
}

int main() 
{
    double n = 0.125;
    unsigned char *p = (unsigned char*)&n;
    printf("%.20f\n", n);

    // print value with hex format
    printf("%02X %02X %02X %02X\n", *(p+7), *(p+6), *(p+5), *(p+4));
    printf("%02X %02X %02X %02X\n", *(p+3), *(p+2), *(p+1), *p);
    printf("\n");

    int digit = 0;
    int k = 548;
    pBits(k, &digit);
    printf("\n");

    p = (unsigned char*)&k;
    printf("%X\n", k);
    printf("%02X %02X %02X %02X\n", p[3], p[2], p[1], p[0]);

    printf("%lu\n", sizeof(k));
    printf("%p\n", &k);
    printf("%p\n", &n);
    return 0;
}

