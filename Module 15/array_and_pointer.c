#include <stdio.h>
int main()
{
    int ar[5]={10,20,30,40,50};
    // printf("0th index er mamorey %p\n", &ar[0]);
    // printf("0th index er mamorey %p\n", ar);

    // printf("0th index er value %d\n", ar[0]);
    // printf("0th index er value %d\n", *ar);
    // So, ar hocche ekta pointer 

    printf("1th index er valuie %d\n", ar[1]);
    printf("1th index er mamorey %d\n", *(ar+1));

    printf("%d\n", *(ar+1));
    printf("%d\n", *(1+ar));
    printf("%d\n", ar[1]);
    printf("%d\n", 1[ar]);
    return 0;
}