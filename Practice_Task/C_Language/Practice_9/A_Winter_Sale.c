#include <stdio.h>

int main()
{
    float percentage, discountedPrice, originalPrice;

    scanf("%f %f", &percentage, &discountedPrice);
    originalPrice = discountedPrice / (1 - percentage / 100);
    printf("%.2f\n", originalPrice);
    return 0;
}
