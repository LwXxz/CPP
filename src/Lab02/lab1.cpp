#include <stdio.h>
#include <stdbool.h>
int main()
{
    printf("\nPrint size of the fundamental types:\n");
    printf("-----------------------------------------\n");
    printf("The sizeof(char) is: %ld bytes.\n", sizeof(char));
    printf("The sizeof(short) is: %ld bytes.\n", sizeof(short));
    printf("The sizeof(int) is: %ld bytes.\n", sizeof(int));
    printf("The sizeof(long) is: %ld bytes.\n", sizeof(long));
    printf("The sizeof(long long) is: %ld bytes.\n", sizeof(long long));
    printf("The sizeof(float) is: %ld bytes.\n", sizeof(float));
    printf("The sizeof(double) is: %ld bytes.\n", sizeof(double));
    printf("The sizeof(long double) is: %ld bytes.\n", sizeof(long double));
    printf("The sizeof(bool) is: %ld byte.\n", sizeof(bool));
    return 0;
}
