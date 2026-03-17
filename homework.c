#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main() {
    float num;
    printf("실수를 입력하세요: ");
    scanf_s("%f", &num);

    uint32_t bits;
    memcpy(&bits, &num, sizeof(bits));

    uint32_t sign = (bits >> 31) & 0x1;
    uint32_t exponent = (bits >> 23) & 0xFF;
    uint32_t mantissa = bits & 0x7FFFFF;

    printf("%d /", sign);

    for (int i = 7; i >= 0; i--)
        printf("%d", (exponent >> i) & 1);

    printf(" /");

    for (int i = 22; i >= 0; i--)
        printf("%d", (mantissa >> i) & 1);

    printf("\n");

    return 0;
}
